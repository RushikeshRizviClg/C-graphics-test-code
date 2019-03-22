#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>


void DDA(int x1,int y1,int x2,int y2,int color)
{
	float x=x1,y=y1;
	int dx=x2-x1,dy=y2-y1,length,i;
	float xinc,yinc;
	if(abs(dx)>=abs(dy))
		length=abs(dx);
	else
		length=abs(dy);
	xinc=(float)dx/length;
	yinc=(float)dy/length;
	putpixel(x,y,color);
	for( i=0;i<length;i++)
	{      //	delay(10);
		x+=xinc;
		y+=yinc;
		putpixel(x,y,color);
	}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
DDA(100,120,350,120,YELLOW);
DDA(100,120,50,200,YELLOW);
DDA(350,120,400,200,YELLOW);
DDA(50,200,400,200,YELLOW);
DDA(120,200,120,350,133);
DDA(330,200,330,350,133);
DDA(120,350,330,350,133);
DDA(160,250,160,350,CYAN);
DDA(250,250,250,350,CYAN);
DDA(160,250,250,250,CYAN);
DDA(270,230,270,280,RED);
DDA(270,230,310,230,RED);
DDA(270,280,310,280,RED);
DDA(310,230,310,280,RED);
circle(150,230,20);
getch();
closegraph();

}


