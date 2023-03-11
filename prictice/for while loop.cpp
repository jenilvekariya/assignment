#include<stdio.h>
main()
{
	int a,fact=1;
	
	printf("enter the value : ");
	scanf("%d",&a);
	
	for(a=a;a>=1;a--)
	
{
	fact=fact*a;
	
	}
	printf("%d",fact);	
}
