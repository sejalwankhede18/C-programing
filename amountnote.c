#include<stdio.h>
int main()
{
	int amt,note,n1,n2;
	printf("\n enter amount :");
	scanf("%d",&amt);
	printf("\n enter range :");
	scanf("%d",&note);
	switch(note)
	{
		case 2000: n1=amt/2000;
		printf("2000-%d",n1);
		amt=amt%2000;
	}
	printf("\n the note is %d",note);
	return 0;
}
