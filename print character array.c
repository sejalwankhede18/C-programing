#include<stdio.h>
int main()
{
	char name[]={'s','y','s','t','e','m'};
	int j;
	printf("the given characters are: %s",name);
	for(j=0;j<6;++j)
	{
		printf("\n %c",name[j]);
	}
	return 0;
}
