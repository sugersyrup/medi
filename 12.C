#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm,tx,ty,sx,sy,x1,y1,x2,y2;
	double angle;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar");
	printf("BASIC TRANSFORMATIONS : \n");
	setcolor(WHITE);
	rectangle(50,50,100,100);
	delay(1500);

	cleardevice();
	// Translation
	tx=150,ty=50;
	outtextxy(200,70,"Translation");
	setcolor(RED);
	rectangle(50+tx,50+ty,100+tx,100+ty);
	delay(1500);

	cleardevice();
	// Rotation
      angle = (30*3.14)/180;
      setcolor(WHITE);
      outtextxy(50,20,"Rotation");
      setcolor(YELLOW);
      x1 = (int)(50+((50-50)*cos(angle)-(100-50)*sin(angle)));
      y1 = (int)(50+((50-50)*sin(angle)+(100-50)*cos(angle)));
      x2 = (int)(100+((100-100)*cos(angle)-(100-50)*sin(angle)));
      y2 = (int)(100+((100-100)*sin(angle)+(100-50)*cos(angle)));
      line(50,50,x1,y1);
      line(x1,y1,x2,y2);
      line(x2,y2,100,50);
      line(100,50,50,50);
      delay(1500);

	cleardevice();
	// Scaling
	sx=3,sy=4;
	setcolor(WHITE);
	outtextxy(180,170,"Scaling");
	setcolor(GREEN);
	rectangle(50*sx,50*sy,100*sx,100*sy);
	delay(1500);

	getch();
	closegraph();
	return 0;
}
