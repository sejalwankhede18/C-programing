#include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	printf("\n enter array elements: ");
	for(i=0;i<5;++i)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;++i)
	{
		sum=sum+arr[i];
	}
	printf("\n sum of array elements are:%d",sum);
	return 0;
}
