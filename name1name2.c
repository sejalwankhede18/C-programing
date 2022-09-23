#include<stdio.h>
int main()
{
	char name1[10],name2[2];
	printf("\n enter any name1");
	scanf("%s",&name1);
	printf("\n the name1 is %s",name1);
	printf("\n enter any name2");
	gets(name2);
	printf("\n the name2 is");
	puts(name2);
	return 0;
}
