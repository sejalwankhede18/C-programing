#include<stdio.h>
int main()
{
	float bytes,bits,kb,mb,gb,tb;
	printf("enter the value for bytes: ");
	scanf("%f",&bytes);
	bits=bytes*8;
	kb=bytes/1024;
	mb=kb/1024;
	gb=mb/1024;
	tb=gb/1024;
	printf("the bits is %f,\n the kb is %f,\n the mb is %f,\n the gb is %f,\n the tb is %f",bits,kb,mb,gb,tb);
	return 0;
}
