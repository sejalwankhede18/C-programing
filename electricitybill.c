#include<stdio.h>
int main()
{
	int unit;
	float amt,total_amt,charges;
	printf("enter total unit consumed: ");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit*0.50;
	}
	else if(unit<=150)
	{
		amt=25+((unit-50)*0.75);
	}
	else if(unit<=250)
	{
		amt=100+((unit-150)*1.20);
	}
	else
	{
		amt=220+((unit-250)*1.50);
	}
	charges=amt*0.20;
	total_amt=amt+charges;
	printf("electricity bill=Rs.%.2f",total_amt);
	return 0;
}
