#include<stdio.h>
int main()
{
	float chem,maths,eng,total_marks;
	printf("\n enter paper marks : ");
	scanf("%f%f%f",&chem,&maths,&eng);
	total_marks=chem+maths+eng;
	printf("\n total marks are %f",total_marks);
	if(total_marks>=45)
	{
		printf("\n pass");
	}
	else
	{
		printf("\n fail");
	}
	return 0;
}
