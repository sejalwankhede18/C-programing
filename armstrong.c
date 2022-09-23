#include<stdio.h>
int main()
{
	int no,sum,rem,save,rev;
	printf("\n enter any num : ");
	scanf("%d",&no);
	save=no;
	do{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}while(no>0);
	if(save==sum)
	{
		printf("\n the number is armstrong");
	}
	else
	{
		printf("\n the number is not armstrong");
	}

	return 0;
}
