#include<stdio.h>
int main()
{
	int week_number,week_day;
	printf("enter week number : ");
	scanf("%d",&week_number);
	if(week_number==1)
	{
		printf("\n the day is sunday");
	}
	if(week_number==2)
	{
		printf("\n the day is monday");
	}
	if(week_number==3)
	{
		printf("\n the day is tuesday");
	}
	if(week_number==4)
	{
		printf("\n the day is wednesday");
	}
	if(week_number==5)
	{
		printf("\n the day is thursday");
	}
	if(week_number==6)
	{
		printf("\n the day is friday");
	}
	if (week_number==7)
	{
		printf("\n the day is saturday");
	}
	return 0;
	
}
