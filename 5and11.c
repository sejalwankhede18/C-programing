#include<stdio.h>
int main()
{
	int num;
	printf(" \n enter any number ");
	scanf("%d",&num);
	if ((num%5==0)&& (num%11==0))
	{
		printf("\n number is divisible by 5 and 11");
	}
	else
	{
		printf("\n number is not divisible by 5 and 11");
	}
	return 0;
	
}
