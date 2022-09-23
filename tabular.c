#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	char subjects[6][25] = {"chem","c programming","maths","environment","electrical &electronics","machine engineering"};
	char subcode[6][7] ={"CH-102", "CS-102", "MA-111", "CS-107","EE-101", "ME-101"};
	int midmarks[6],semmarks[6], i=0;
	int MTotal= 0,count = 0;
	char name[30], fname[30], rno[10], college[50];
	printf("enter your name :");
	
	gets(name);
	printf("\n enter your father name:");
	
	gets(fname);
	printf("\n enter your roll number:");
	 gets(rno);
	 printf("\nenter your college name:");
	 gets(college);
	 for(i=0; i<6; i++)
	 { 
	  printf("\n enter your midterms marks for %s:",subjects+1);
	  scanf("%d",&midmarks[i]);
	  printf("enter your semester marks for %s",subjects+1);
	  scanf("%d",&semmarks[i]);
	 }
	  
	  printf("\n\n\n\n\t\t********YOUR RESULT********\n\n");
	  printf("\t\tCOLLEGE: %s",college);
	  printf("\n\t\tNAME: %s\t\tFATHER NAME:%s", name,fname);
	  printf("\n\t\tROLL NUMBER: %s",rno);
	  printf("\n\t\tSUBJECTS \t marks1 \t marks2 \t TOTAL");
	   
	   for(i=0;i<6;i++)
	   {
	   printf("\n\t");
	   printf("\t%s \t\t %d \t\t%d",midmarks[i],semmarks[i],midmarks[i]);
	    
	    
	    MTotal= MTotal=midmarks[i]+semmarks[i];
	    if (midmarks[i]+semmarks[i]<44)
	    count=count+1;
	    
	   
	   }
	   if (count==0)
	   printf("\n\n\t\tTOTAL MARKS:%d\t\tRESULT: PASS",MTotal);
	   else
	   printf("\n\n\t\tTOTAL MARKS:%d \t\tRESULT: FAIL",MTotal);
	   return 0;
	  
}
	

