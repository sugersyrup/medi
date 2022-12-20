#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void boundaryfill(int x,int y,int fill,int boundary)
{
	int current;
	
	current = getpixel(x,y);
	if((current!=fill)&&(current!=boundary))
	{
		setcolor(fill);
		putpixel(x,y,fill);
		boundaryfill(x+1,y,fill,boundary);
		boundaryfill(x-1,y,fill,boundary);
		boundaryfill(x,y+1,fill,boundary);
		boundaryfill(x,y-1,fill,boundary);
	}
}

int main()
{
    int gd=DETECT,gm, x = 250, y = 200, radius = 80;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar\n");
    circle(x, y, radius);
    boundaryfill(x, y, 4, 15);
    delay(10);
    closegraph();
    return 0;
}
