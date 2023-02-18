#include<stdio.h>
main()
{
	
	int a,b,add,sub,mul,div;
	float mod;
	
	printf("value of a : ");
	scanf("%d",&a);
	
	printf("value of b : ");
	scanf("%d",&b);
	
	add=a+b;
	printf("add :%d",add);
	
	sub=a-b;
	printf("\nsub :%d",sub);
	
	mul=a*b;
	printf("\nmul :%d" ,mul);
	
	div=a/b;
	printf("\ndiv :%d ",div);
	
	mod=a%b;
	printf("\nmod :%f",mod);

}
