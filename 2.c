#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar\n");
	// rectangle
	rectangle(20,300,180,200);
	outtextxy(60,330,"Rectangle");

	// circle
	circle(100,100,50);
	outtextxy(75,170,"Circle");

	// square
	moveto(300,60);
	lineto(390,60);
	lineto(390,150);
	lineto(300,150);
	lineto(300,60);
	outtextxy(325,180,"Square");

	// triangle
	moveto(350,200);
	lineto(300,300);
	lineto(400,300);
	lineto(350,200);
	outtextxy(320,320,"Triangle");
	
	getch();
	closegraph();
	return 0;
}
