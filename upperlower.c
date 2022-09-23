#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any character: ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n the charcter is alphabet");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n the charcter is alphabet ");
	}
	else 
	{
	printf("\n %c the charcter is not an alphabet ",ch);
}
	return 0;
}
