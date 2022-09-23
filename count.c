#include<stdio.h>
int main()
{
	int no,count=0;
	printf("\n enter any no:");
	scanf("%d",&no);
	while(no>0){
		++count;
		no=no/10;
	}
	printf("\n the no count is:%d",count);
	return 0;
}
