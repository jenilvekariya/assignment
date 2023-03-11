#include<stdio.h>
int main()
{
	int r,w,l,b,h,area_of_triangle,area_of_rectangle;
    float area_of_circle;
    	int number;

			
	printf("\n find area");
	printf("\n 1.area of recatngle");
	printf("\n 2.area of triangale");
	printf("\n 3.area of circle");
	

	printf("\n Enter the number of your choice ");
	scanf("%d",&number);
    
    switch(number)
    {
    	case 1:
    	
    	printf("\n enter value of r:");
    	scanf("%d",&r);
    	
    	area_of_circle= 3.14*r*r;
    	
    	printf("\n area of circle : %f",area_of_circle);
    	
    	break;
    	
    	case 2:
    	
    	printf("\n enter value of base hight :");
    	scanf("\n %d",&b);
    	
    	printf("\n enter value of hight :");
    	scanf("%d",&h);
	
    	area_of_triangle = 0.5*b*h ;
    	
    	printf("\n area of triangle :%d",area_of_triangle);
    	break;
    	
    	case 3:
    	
    	printf("\n enter value of width :");
    	scanf("\n %d",&w);
    	
    	printf("\n enter velue of length :");
    	scanf("\n %d",&l);
    	
    	area_of_rectangle = w*l;
    	
    	printf("\n area of recatangle : %d",area_of_rectangle);
    	break;
	}
	printf("\n thank you");
}
