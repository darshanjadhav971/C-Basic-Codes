#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	
	setcolor(YELLOW);
	circle(340, 220, 100);

	setcolor(RED);
	circle(300,210,10);
	circle(380,210,10);

	getch();
	closegraph();

}
