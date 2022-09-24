#include<stdio.h>
int main()
{
	int arr[200],i,even=0,odd=0;
	printf("\n enter array elements: ");
	for(i=0;i<20;++i)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<20;++i)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	printf("\n the even array elements are:%d,and odd array elements are%d",even,odd);
	return 0;
}
