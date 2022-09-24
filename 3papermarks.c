#include<stdio.h>
int main()
{
	int p1,p2,p3,total;
	float per;
	printf("\n enter 3 paper marks : ");
	scanf("%d%d%d",&p1,&p2,&p3);
	total=p1+p2+p3;
	per=total/3;
	printf("\n total marks=%d",total);
	printf("\n perc=%f",per);
	return 0;
}
