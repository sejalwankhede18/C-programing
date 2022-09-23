#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,x,n,no,i,fact;
	printf("enter nth term :");
	scanf("%d",&n);
	printf("\n enter x value: ");
	scanf("%d",&x);
	for(i=1;i<n;++i)
	{
		n=i;
		fact=1;
		while(no>0){
			fact=fact*no;
			--no;
		}
	sum=sum+(pow(x,i)/i);
	}
	printf("sum of series is %d",sum);
	return 0;
}
