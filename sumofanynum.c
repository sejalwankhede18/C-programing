#include<stdio.h>
int main()
{
	int i,sum=1,no;
	printf("\n enter any number :");
	scanf("%d",&no);
	for(i=1;i<=20;++i);
	{
		if(i%2==0){
			sum=sum+1;
		}
	}
	printf("\n the sum of any num is:%d",sum);
	return 0;
}
