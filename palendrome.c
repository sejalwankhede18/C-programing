#include<stdio.h>
int main()
{
	int rev,rem,no,save;
	printf(" enter number: ");
	scanf("%d",&no);
	save=no;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(save==rev)
	{
		printf("the %d is palendrome");
	}
	else{
		printf("the %d is not palendrome");
	}
}
