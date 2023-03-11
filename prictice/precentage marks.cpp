#include<stdio.h>
main()
{
	int science,match,english,total_marks;
	float precentage ;
	
	printf("enter marks of science:");
	scanf("%d",&science);
	
	printf("\nenter marks of match:");
	scanf("%d",&match);
	
	printf("\n enter marks of english:");
	scanf("%d",&english);
	
    total_marks = match + science +english ;
    
    printf("\n total_marks : %d",total_marks);
    precentage =(total_marks*100)/300;
    
    printf("\n precentage : %f",precentage);
    
    
    if (precentage >=80)
    {
    	printf("\n grade : DISTRICTION");
    	
	}
    
	else if (precentage >=50)
	{
		printf("\n grade : frist class");
	}
	
	else if (precentage >=35)
	{
		printf("\n grade: second class");
	}
	
	else
	{
		printf("\n grade :fail");
	}
}
