#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\n enter value for arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}
