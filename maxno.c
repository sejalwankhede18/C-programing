#include<stdio.h>
int main()
{
	int n1,n2,n3,max;
	printf("enter three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	max=n1;
	if(max<n2)
	{
		max=n2;
	}
	if(max<n3)
	{
		max=n3;
	}
	printf("the maximum number is %d",max);
	return 0;
	
}
