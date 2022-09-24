#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("\n eneter array elements:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n array elements are: ");
	for(i=0;i<5;++i)
	{
		printf("\n %d",arr[i]);
	}
	return 0;
}
