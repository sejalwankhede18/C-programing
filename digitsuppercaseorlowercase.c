#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter any character: ");
	scanf("%d",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("the %c ch is uppercase",ch);
    }
    else if(ch>=97 && ch<=122)
    {
    	printf("\n the %c ch is in lowercase",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n the %c ch is digits",ch);
	}
	else
	printf("\n the %c is special symbols",ch);
	return 0;
}
