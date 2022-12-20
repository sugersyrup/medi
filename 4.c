#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

int main() 
{
    int gd = DETECT,gm;
    int x, y = 0, j, t = 400, c = 1;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar\n");
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    for (x = 40; x < 602; x++)
	{
	cleardevice();
	circle(x, y, 30);
	floodfill(x, y, RED);
	delay(50);
	if (y >= 400)
		{
	    c = 0;
	    t -= 20;
	}
	if (y <= (400 - t))
	    c = 1;
	y = y + (c ? 15 : -15);
    }
    getch();
    closegraph();
    return 0;
}
