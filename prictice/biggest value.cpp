#include<stdio.h>
main()
{
	int a,b,c,d ;
	
	printf("enter the value a :");
	scanf("%d",&a);
	
	printf("\nenter the value b  : ");
	scanf("%d",&b);
	
	printf("\n enter the value c  :");
	scanf("%d",&c);
	
	printf("\n enter the value d :");
	scanf("%d",&d);
	
	if(a>b && a>c && a>d)
	{
		printf("\n A is  biggest");
	
	}
	else if (b>c && b>d && b>a)
	{
		printf("\n B is biggest");
	}
	
	else if (c>d && c>a && c>b)
	{
		printf("\n C is  biggest");
		
	}
	else
	{
		printf("\n D is biggest");
	}
}
