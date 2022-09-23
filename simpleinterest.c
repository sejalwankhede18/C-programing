#include<stdio.h>
int main()
{
	float principal,rate,time,simple_interest;
	printf("enter the principal amount,rate,time : ");
	scanf("%f%f%f",&principal,&rate,&time);
	simple_interest=(principal*rate*time);
	printf("the value of simple interest is %f",simple_interest);
	return 0;
}
