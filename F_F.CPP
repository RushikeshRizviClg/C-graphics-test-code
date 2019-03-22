#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void floodfill(int x,int y,int old_color,int new_color)
{
    if(getpixel(x,y)==old_color )
    {
	putpixel(x,y,new_color);
	floodfill(x-1,y,old_color,new_color);
	floodfill(x+1,y,old_color,new_color);
	floodfill(x,y+1,old_color,new_color);
	floodfill(x,y-1,old_color,new_color);
	floodfill(x+1,y+1,old_color,new_color);
	floodfill(x-1,y+1,old_color,new_color);
	floodfill(x+1,y-1,old_color,new_color);
	floodfill(x-1,y-1,old_color,new_color);
    }
}
void main()
{
    int gm,gd=DETECT;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setcolor(RED);
    line(300,100,200,200);
    setcolor(YELLOW);
    line(300,100,400,200);
    setcolor(GREEN);
    line(200,200,400,200);
    delay(50);
    floodfill(250,150,0,BLUE);
    getch();
    closegraph();
}