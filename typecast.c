#include<stdio.h>
int main()
{
	char c1,c2,c3;
	int i1,i2,i3;
	float f1,f2,f3;
	c1='S';
	i1=70.85,i3=45.87;
	f1=15.35;f3=14.88;
	c2=i1;
	i2=f1;
	printf("\n c2 is %c and i2 is %d",c2,i2);
	f2=i1;
	i2=c1;
	printf("\n f2 is %.2f and i2 is %d",f2,i2);
	c3=i3;
	i3=f3;
	printf("\n c3 is of %c and i3 is of %d",c3,i3);
	return 0;
	
}
