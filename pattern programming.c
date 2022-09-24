#include<stdio.h>
int main()
{
	int i,j,n=65,sp=12,k;
	for(i= 1; i <=4; ++i)
	{
		for(k= 1; k<sp; ++k)  //rows
		{
			printf(" ");
		}
		for (j= 1;j <=i; ++j)  //cols
		{
			printf("*");
		}
		printf("\n");
		sp--;
	}
	return 0;
}
