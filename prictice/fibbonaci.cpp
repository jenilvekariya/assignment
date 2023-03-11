#include<stdio.h>
main()

{
	int a=0,b=1,c=0,n;
	
	printf("\n enter value :");
	scanf("\n%d",&n);
	
	printf("\n%d",a);
	printf("\n%d",b);
	
	while(n>=1)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		n--;
	}
	printf("\n%d",c);
}
