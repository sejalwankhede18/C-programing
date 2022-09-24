#include<stdio.h>
int main()
{
	int i,j=1;
	for(i=1;i<=10;++i)
	{
		if(i==1)
		{
			printf("%d\t",j);
			++j;
		}
		else if(i==2)
		{
			printf("%d\t",j);
			++j;
		}
		else
		{
			printf("%d\t",j);
			j=j+2;
		}
	}
	return 0;
}
