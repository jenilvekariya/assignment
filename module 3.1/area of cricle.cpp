#include<stdio.h>
main()
{
	int r;
	float circle;
	
	printf("value of r: ");
	scanf("%d",&r);
	
	circle=3.14*r*r;
	
	printf("area of circle :%f",circle);
	
	int w,l,rectangle;
	
	printf("\nvalue of w: ");
	scanf("%d",&w);
	
	printf("value of l:");
	scanf("%d",&l);
	
	rectangle=w*l;
	
	printf("area of ractangle:%d",rectangle);
	
	
	int b,h;
	float triangle;
	
	printf("\nvalue of b: ");
	scanf("%d",&b);
	
	printf("value of h: ");
	scanf("%d",&h);
	
	triangle = 0.5*h*b;
	printf("area of triangle:%f",triangle);
	
}
