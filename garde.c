#include<stdio.h>
int main()
{
	int phy,chem,bio,maths,comp;
	float perc;
	printf("\n enter five subject marks: ");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);
	perc=(phy+chem+bio+maths+comp)/5;
	printf("\n perc is %f",perc);
	if(perc>=90)
	{
		printf("\n the grade is A");
	}
	else if (perc>=80)
	{
		printf("the grade is B");
	}
	else if(perc>=70)
	{
		printf("the grade is C");
	}
	else if(perc>=60)
	{
		printf("the garde is D");
	}
	else if (perc>=40)
	{
		printf("the garde is E");
	}
	else
	{
		printf("the garde is F");
	}
	return 0;
}
