#include<stdio.h>
int main()
{
	int i,j,sum;
	int matrix[4][3]={
	                   
	                   	{1,2,3},
	                   	{4,5,6},
	                   	{7,8,9},
	                    {10,11,12}
					   };
					   for (i=0;i<4;i++)
					   {
					   	for (j=0;j<3;j++)
					   	{
					   		sum+=sum+matrix[i][j];
						   }
						   printf("\n");
						   sum=0;
					}
					return 0;
}
