

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void plot(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);


}
void mid(int xc,int yc,int r)
{
	int x=0,y=r,p=1-r;
	plot(xc,yc,x,y);
	while(x<y)
	{
		if(p<0)
		{
			p=p+2*x+3;
			x++;
		}
		else{
			p=p+2*(x-y)+5;
			x++;
			y--;
		}
		plot(xc,yc,x,y);
	}

}
void main()

{
	int gd=DETECT,gm;
	clrscr();
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	mid(300,200,100);
	mid(300,215,20);mid(325,215,20);
//	closegraph();
	getch();
	closegraph();
}