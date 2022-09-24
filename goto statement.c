#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter values of a&b :");
	scanf("%d%d",&a,&b);
	if(b==0)
	{
		goto error;
	}
	c=a/b;
	printf("\n answer =%d",c);
	if (b==0)
	{
		error:printf("\n try to divide by zero number ");
	}
	return 0;
}
