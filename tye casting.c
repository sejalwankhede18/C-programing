#include<stdio.h>
int main()
{
	char c1,c2;
	int i1,i2;
	float f1,f2;
	c1='H';
	i1=80.56;/*float converted to int only 80 assigned to i1*/
	f1=12.6;
	c2=i1; /*int converted to char*/
	i2=f1; /*float converted to int*/
	/*now c2 has the character with ASCII value 80,i2 is assigned value 12*/
	printf("\nc2=%c,i2=%d",c2,i2);
	f2=i1; /*int converted to float*/
	i2=c1; /*char converted to int*/
	/*now i2 contains ASCII value of character 'H'which is 72*/
	printf("\nf2=%.2f,i2=%d",f2,i2);
	return 0;
	
	}
