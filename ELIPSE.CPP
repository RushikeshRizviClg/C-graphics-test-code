#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void elipse(int xc,int yc,float rx,float ry)
{
int gm=DETECT,gd;
float x,y;
float p;
clrscr();
initgraph(&gm,&gd,"c:\\TC\\BGI");
x=0;
y=ry;
p=(ry*ry)-(rx*ry)+((rx+ry)/4);
while((2*x*ry*ry)<(2*y*rx*rx))
{
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,RED);
putpixel(xc+x,yc+y,BLUE);
putpixel(xc-x,yc-y,YELLOW);
if(p<0)
{
x=x+1;
y=y;
p=p+(2*ry*ry*x)+(ry*ry);
}
else
{
x=x+1;
y=y-1;
p=p+(2*ry*ry*x+ry*ry)-(2*rx*rx*y);
}
}
p=(x+0.5)*(x+0.5)*ry*ry+(y-1)*(y-1)*rx*rx-rx*rx*ry*ry;
while(y>=0)
{
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,RED);
putpixel(xc+x,yc+y,BLUE);
putpixel(xc-x,yc-y,YELLOW);
if(p>0)
{
x=x;
y=y-1;
p=p-(2*rx*ry*y)+(rx*rx);
}
else
{
y=y-1;
x=x+1;
p=p+(2*ry*ry*x)-(2*rx*rx*y)-(rx*rx);
}
}
getch();
closegraph();
}
void main()
{
int xc,yc,rx,ry;
clrscr();
printf("enter the value of xc");
scanf("%d",&xc);
printf("enter the value of yc");
scanf("%d",&yc);
printf("enter the value of rx");
scanf("%d",&rx);
printf("enter the value of ry");
scanf("%d",&ry);
elipse(xc,yc,rx,ry);
getch();

}
