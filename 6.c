#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
void ddaLine(int x1,int y1,int x2,int y2)
{
	int  dx, dy, length, i;
    float x, y, xinc, yinc;
	dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        length = abs(dx);
    else
        length = abs(dy);
    xinc = dx / (float)length;
    yinc = dy / (float)length;
    x = x1;
    y = y1;
    putpixel(x, y, 15);
    for (i = 0; i < length; i++)
    {
        putpixel(x, y,15);
        x = x + xinc;
        y = y + yinc;
        delay(10);
    }
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar\n");
	setcolor(WHITE);
	ddaLine(150,180,250,180);
	ddaLine(250,180,250,300);
	ddaLine(250,300,150,300);
	ddaLine(150,300,150,180);
	
	ddaLine(250,180,420,180);
	ddaLine(420,180,420,300);
	ddaLine(420,300,250,300);
	ddaLine(250,300,250,180);
	
	ddaLine(180,250,220,250);
	ddaLine(220,250,220,300);
	ddaLine(220,300,180,300);
	ddaLine(180,300,180,250);
	
	ddaLine(200,100,150,180);
      ddaLine(200,100,250,180);
      ddaLine(200,100,370,100);
      ddaLine(370,100,420,180);
    
      setfillstyle(SOLID_FILL, CYAN);
      floodfill(152, 182, WHITE);
      floodfill(252, 182, WHITE);
      setfillstyle(SLASH_FILL, RED);
      floodfill(182, 252, WHITE);
      setfillstyle(HATCH_FILL, RED);
      floodfill(200, 105, WHITE);
      floodfill(210, 105, WHITE);
    
      getch();
      closegraph();
	
	return 0;	
}
