#include<stdio.h>
int main()
{
	int no,sum=1,rem;
	printf("\n enter any number :");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		sum=sum*rem;
		no=no/10;
	}
	printf("\n sum of numbers are:%d",sum);
	return 0;
}
