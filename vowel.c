#include<stdio.h>
int main()
{
	char ch,a,e,i,o,u;
	printf(" enter charcter : ");
	scanf("%c",&ch);
	if(ch=='a' ||ch=='e' ||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n the character is vowel",ch);
	}
	else
	{
	    printf("\n the character is not a vowel",ch);
	}
	return 0;
}
