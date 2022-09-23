#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any charcter :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	printf("\n %c is upper case",ch);
	else if(ch>=97 && ch<=112)
	printf("\n %c is lower case",ch);
	return 0;
}
