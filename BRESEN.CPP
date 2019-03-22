#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int x2,x1,y2,y1,x,y,xinc=0,yinc=0,dx,dy,p,k;

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
clrscr();
printf("Enter  4 Co-ordinate :");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
x=x1;y=y1;
putpixel(x,y,WHITE);
dx=x2-x1;  dy=y2-y1;
if(abs(dx)>=abs(dy))
{
	p=2*dy-dx;
	for(k=0;k<=abs(dx);k++)
	{
		xinc=dx/(abs(dx));
		if(p<0)
		{
			p=p+2*dy;

		}
		else
		{
			yinc=dy/(abs(dy));
			p=p+2*(dy-dx);
		}
		x=x+xinc;
		y=y+yinc;
		xinc=yinc=0;
		putpixel(x,y,WHITE);
	}
}
else
{
	p=2*dx-dy;
	for(k=0;k<=abs(dy);k++)
	{
		yinc=dy/(abs(dy));
		if(p<0)
		{
			p=p+2*(dx);
		}
		else
		{
			xinc=dx/(abs(dx));
			p=p+2*(dy-dx);
		}
		x=x+xinc;
		y=y+yinc;
		putpixel(x,y,WHITE);
	}

}
getch();
closegraph();
}

