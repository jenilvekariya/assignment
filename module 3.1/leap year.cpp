#include<stdio.h>
main()
{
	int year;
	
	printf("enter the year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("LEAP YEAR");
	}
	else
	{
		printf("NOT LEAP YEAR");
	}
}
