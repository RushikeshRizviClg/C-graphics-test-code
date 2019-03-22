#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int x1,y1,x2,y2,x3,y3;
void translate();
void rotate();
void scale();
void draw(int,int,int,int,int,int);
void main()
{
int gd=DETECT,gm,option;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("enter the co-ordinate\n");
printf("x1\t y1:");
scanf("%d%d",&x1,&y1);
printf("x2\ty2:");
scanf("%d%d",&x2,&y2);
printf("x3\ty3:");
scanf("%d%d",&x3,&y3);
do
{
printf("****MAIN MENU****\n");

printf("1.Translation\n");
printf("2.Rotation\n");
printf("3.scaling\n");
printf("4.exit\n");
printf("enter your option\n");
scanf("%d",&option);
switch(option)
{
case 1: translate();
	break;
case 2: rotate();
	break;
case 3:scale();
	break;
case 4: break;
}
}while(option!=4);
getch();
}
void draw(int x1,int y1,int x2, int y2,int x3, int y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
}
void translate()
{
int tx,ty;
draw(x1,y1,x2,y2,x3,y3);
printf("enter translation factor tx and ty\n");
scanf("%d%d",&tx,&ty);
draw(x1+tx,y1+ty,x2+tx,y2+ty,x3+tx,y3+ty);
}
void scale()
{
	float tx,ty;
	draw(x1,y1,x2,y2,x3,y3);
	printf("enter scaling factor sx and sy");
	scanf("%f%f",&tx,&ty);
	draw(x1*tx,y1*ty,x2*tx,y2*ty,x3*tx,y3*ty);
}
void rotate()
{
int a1,a2,b1,b2,a3,b3;
float a,r;
draw(x1,y1,x2,y2,x3,y3);
printf("enter rotation angle:");
scanf("%f",&a);
r=(a*3.14)/180;
a1=abs(x1*cos(r)-y1*sin(r));
b1=abs(y1*sin(r)+x1*cos(r));
a2=abs(x2*cos(r)-y2*sin(r));
b2=abs(y2*sin(r)+x2*cos(r));
a3=abs(x3*cos(r)-y3*sin(r));
b3=abs(y3*sin(r)+x3*cos(r));
draw(a1,b1,a2,b2,a3,b3);
}