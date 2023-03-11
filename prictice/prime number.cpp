#include<stdio.h>
main()
{
	int a,n,div=1;
	
	printf("\n enter number: ");
	scanf("\n%d",&a);
	
	for(n=2;n<=a-1;n++)
	
	{
		if(a%n==0)
		{
		  div=0;
		  break;	
		}
		else
		{
			div=1;
		}
	}
	if(div==0)
	{
		printf("\n number is not prime");
		
	}
   	else
	{
		printf("\n number is prime");
	}
}
