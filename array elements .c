#include<stdio.h>
int main()
{
	int arr[100],n,i,item,loc;
	printf("\n enter how many array elements want to store: ");
	scanf("%d",&n);
	printf("\n enter number which is to be inserted in array: ");
	scanf("%d",&item);
	printf("\n enter location where to store:");
	scanf("%d",loc);
	printf("\n enter array elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=loc;--i)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=item;
	printf("\n array elements are: \n");
	for(i=0;i<n+1;++i)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
