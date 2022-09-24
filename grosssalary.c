#include<stdio.h>
int main()
{
	int gross_salary,basic_salary,da,ta,hra;
	printf("enter basic_salary :");
	scanf("%d",&basic_salary);
	da=basic_salary*0.5;
	ta=basic_salary*0.4;
	hra=basic_salary*0.6;
	gross_salary=basic_salary+da+ta+hra;
	printf("the value of gs is %d",gross_salary);
	return 0;
}
