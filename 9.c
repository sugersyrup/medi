#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, GREEN);
    putpixel(xc-x, yc+y, GREEN);
    putpixel(xc+x, yc-y, GREEN);
    putpixel(xc-x, yc-y, GREEN);
    putpixel(xc+y, yc+x, GREEN);
    putpixel(xc-y, yc+x, GREEN);
    putpixel(xc+y, yc-x, GREEN);
    putpixel(xc-y, yc-x, GREEN);
}
 
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {
        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(40);
    }
}

int main()
{
    int xc,yc,r,gd=DETECT,gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
    printf("EN20CS301269 Neha Katiyar\n");
    printf("Enter center of circle : ");
    scanf("%d%d",&xc,&yc);
    printf("\nEnter radius : ");
    scanf("%d",&r);
    
    circleBres(xc, yc, r); 
    delay(1000);
    closegraph();
    getch();
    return 0;
}
