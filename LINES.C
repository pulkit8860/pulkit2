#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int x1,y1,c,i,px1,py1,xp1,yp1,xp2,yp2;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\bgi");
	printf("enter coeff of x:");
	scanf("%d",&x1);
	printf("enter coeff of y");
	scanf("%d",&y1);
	printf("enter constant:");
	scanf("%d",&c);
	printf("enter powers of x&y:");
	scanf("%d%d",&px1,&py1);

		xp1=x1*pow(1,px1)+c;
		yp1=y1*pow(1,py1)+c;
		xp2=x1*pow(2,px1)+c;
		yp2=y1*pow(2,py1)+c;

	line(xp1,yp1,xp2,yp2);
	getch();
	closegraph();

	return 0;
}
