#include<stdio.h>
main()
{
	int num,a,b;
	printf("Enter a two digit number:");
	scanf("%d",&num);
	a=num%10;
	b=num/10;
	printf("The swapped number is:%d%d ",a,b);	
}
