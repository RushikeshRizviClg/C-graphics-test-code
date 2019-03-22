#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void boundaryfill(int x,int y,int f_color,int b_color)
{
    if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
    {
	putpixel(x,y,f_color);
	boundaryfill(x-1,y,f_color,b_color);
	boundaryfill(x+1,y,f_color,b_color);
	boundaryfill(x,y+1,f_color,b_color);
	boundaryfill(x,y-1,f_color,b_color);
	boundaryfill(x+1,y+1,f_color,b_color);
	boundaryfill(x-1,y+1,f_color,b_color);
	boundaryfill(x+1,y-1,f_color,b_color);
	boundaryfill(x-1,y-1,f_color,b_color);
    }
}
void main()
{
    int gm,gd=DETECT,radius;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setcolor(15);
    rectangle(25,85,75,125);
    boundaryfill(40,100,4,15);
    delay(50);
    getch();
    closegraph();

}