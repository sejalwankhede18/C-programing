#include<stdio.h>
int main()
{
	int i,n=1,m=1;
	for(i=1;i<=10;++i)
	{
		printf("\%d\t",m);
		n=n+2;
		m=n*2;
	}
	return 0;
}
