#include<stdio.h>
main()
{
	int a,fact =1;
	

	printf("\n enter value : ");
	scanf("%d",&a);
	
	while(a>=1)
	{
		
		fact=fact*a;
		a=a-1;
		
	}
	printf("%d",fact);
	
}
