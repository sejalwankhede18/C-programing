#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter any number=");
	scanf("%d",&n);
	if(n>0)
	printf("\n %d is positive",n);
	if (n<0)
	printf("\n %d is negative",n);
	if(n==0)
	printf("\n %d is zero",n);
	return 0;
}
