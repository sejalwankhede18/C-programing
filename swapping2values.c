#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter any two values : ");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping a=%d and b=%d",a,b);
	return 0;
}
