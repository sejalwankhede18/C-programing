#include<stdio.h>
int main()
{
	int a,b,c,small;
	printf("enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		small=a;
		else
		small=c;
	}
	else
	{
		if(b<c)
		small=b;
		else
		small=c;
	}
	printf("the smallest number is %d",small);
	return 0;
}
