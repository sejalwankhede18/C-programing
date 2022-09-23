#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	printf("\n Enter three angle: ");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum=a1+a2+a3;
	if(sum==180)
	{
		printf("\n the traingle is valid");
	}
	else
	{
		printf("the triangle is invalid");
	}
	return 0;
}
