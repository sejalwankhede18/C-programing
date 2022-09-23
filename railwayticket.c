#include<stdio.h>
int main()
{
	float date,time,source;
	char destination,railway_ticket,happy_journey;
	int no_of_passengers,fees_per_passenger;
	printf("\n-------------railway ticket----------------");
	scanf("%c",&railway_ticket);
	printf("------------------------------------------------");
	printf("\n enter date ");
	scanf("%f",&date);
	printf("\n enter time");
	scanf("%f",&time);
	printf("\n enter source");
	scanf("%f",&source);
	printf("\n no_of_passengers ");
	scanf("%d",&no_of_passengers);
	printf("\n enter destination ");
	scanf("%c",&destination);
	printf("\n fees_per_passenger");
	scanf("%d",&fees_per_passenger);
	printf("----------------------------------------------");
	printf("\n-----------------happy journey-------------------");
	scanf("%",happy_journey);
	printf("\n date:18 sep         time:10 pm          ");
	printf("\n source:train           destination:mumbai       ");
	printf("\n no of passengers:10             ");
	printf("\n fees per passenger:500/10           ");
	printf("\n total:50      ");
	printf("\n ---------------------------------------------");
	return 0;

}
