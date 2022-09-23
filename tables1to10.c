#include<stdio.h>
int main()
{
	int i,n;
	for(i=1;i<=10;i++)
	{
			printf("\n %d*%d=%d\t",n,i,n*i);
			n=2;
		}
		for(i=1;i<=10;i++)
		{
			printf("\n %d*%d=%d\t",n,i,n*i);
			n=3;
		}
		for(i=1;i<=10;i++)
		{
			printf("%d*%d=%d\t",n,i,n*i);
			n=4;
		}
		for(i=1;i<=10;i++)
		{
			printf("%d*%d=%d\t",n,i,n*i);
			n=5;
		}
		for(i=1;i<=10;++i)
		{
			printf("%d*%d=%d\t",n,i,n*i);
			n=6;
		}
		for(i=1;i<=10;++i)
		{
			printf("%d*%d=%d\t",n,i,n*i);
			n=7;
		}
		return 0;
	
}
