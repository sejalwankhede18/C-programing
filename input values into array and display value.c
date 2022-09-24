#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0 ;i<5;i++)
	{
		printf("\n enter a value of array arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("the array element are: ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
