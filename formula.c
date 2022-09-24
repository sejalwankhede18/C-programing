#include<stdio.h>
int main()
{
	int a,b,c,res;
	printf("every value for a,b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	res=(b*b*c*c)*(b*b)-(c*c)+(c*c*a*a)*(c*c)-(a*a)+(a*a*b*b)*(a*a)-(b*b);
	printf("the value for this is %d",res);
	return 0;
	
}
