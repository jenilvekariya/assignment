#include<stdio.h>
main()
{
	int year,days ;
	
	printf("enter num of year: ");
	scanf("%d",&year);
	
	
	days=year*365;
	
	printf("day: %d",days);
	
	printf("\nenter num of days: ");
	scanf("%d",&days);
	
	year=days/365;
	
	printf("year: %d",year);
	
}
