#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood(int x, int y, int new_col, int old_col)
{
    if (getpixel(x, y) == old_col) {
	putpixel(x, y, new_col);
	flood(x + 1, y, new_col, old_col);
	flood(x - 1, y, new_col, old_col);
	flood(x, y + 1, new_col, old_col);
	flood(x, y - 1, new_col, old_col);
    }
}

int main()
{       int oldcolor,newcolor,x,y,top, left, bottom, right;
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("EN20CS301269 Neha Katiyar\n");

    top = left = 50;
    bottom = right = 300;
    rectangle(left, top, right, bottom);
     x = 51;
     y = 51;
     newcolor = 12;
     oldcolor = 0;
    flood(x, y, newcolor, oldcolor);
	delay(10);
	getch();
	closegraph();
	return 0;
}
