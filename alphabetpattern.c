#include<stdio.h>
int main()
{
	int i,j,n=65;
	for(i=1;i<=4;++i)
	{
		for( j=1;j<=4;++j)
		{
			printf("%4c",n++);
		}
		printf("\n");
	}
	return 0;
}
