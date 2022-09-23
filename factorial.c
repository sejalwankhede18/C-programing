#include<stdio.h>
int main()
{
	int sum=0,no,rem,save,n,i;
	printf("\n enter number :");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		no=i;
		sum=0;
		while(no>0)
		{
			rem=no%10;
			sum=sum+rem*rem*rem;
			no\=10;
		}
		if(i==sum)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}
