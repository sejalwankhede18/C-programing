#include<stdio.h>
int main()
{
	int year;
	printf("\n enter year: ");
	scanf("%d",&year);
	if(year%100!=0)
	{
		if(year%4==0)
		printf("\n %d is non century leap year",year);
		else
		printf("\n %d is not leap year",year);
	}
	else
	{
		if(year%400==0)
		printf("\n %d is century leap year",year);
		else
		printf("\n %d is leap year",year);
	}
	return 0;
}
