#include<stdio.h>
int main()
{
	float p1,p2,p3,total,perc;
	printf("\n enter paper marks: ");
	scanf("%f%f%f",&p1,&p2,&p3);
	total=p1+p2+p3;
	perc=total/3;
	printf("\n total is %f",total);
	printf("\n perc is %f",perc);
	if(perc>=62)
	{
	{
		printf("\n gender is female");
	}
	if(perc>=62)
	{
		printf("\n she can take admission");
	}
	else
	{
		printf("\n she cant take admission");
	}
}
	return 0;
}
