#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("\n enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	max=n1;
	if (max<n2)
	{
		max=n2;
	}
	printf("the maximum number is %d",max);
	return 0;
	
}

