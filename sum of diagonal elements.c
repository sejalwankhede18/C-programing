#include<stdio.h>
int main()
{
	int i,j,n=0,sum=0;
	for ( i=1;i <=4; ++i)
	{
		for (j=1 ;j<=4;++j)
		{
			printf("%d",++n);
			sum=sum+n;
		}
		printf("\t-->%d",sum);
		sum=0;
		printf("\n");
	}
	return 0;
}
