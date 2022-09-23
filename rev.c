#include<stdio.h>
int main()
{
	int a,b,c,d,e,rev,no;
	printf("\n enter any no :");
	scanf("%d",&no);
	a=no%10;
	no=no/10;
	b=no%10;
	no=no/10;
	c=no%10;
	no=no/10;
	d=no%10;
	no=no/10;
	e=no%10;
	no=no/10;
	rev=a*10000+b*1000+c*100+d*10+e;
	printf("the rev of the number is %d",rev);
	return 0;
}
