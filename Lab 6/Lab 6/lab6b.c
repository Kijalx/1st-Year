#include <stdio.h>

int main()
{
	char stand;
	const float HS = 15, DS = 20, CS = 35.5;
	int no_tickets;
	float total_cost;
	printf("Please enter the amount of tickets (MAX:8): \n");
	scanf("%i", &no_tickets);

	if (no_tickets > 8){
		printf("%i is greater than 8 please enter a valid number", no_tickets);
	}
	else if (no_tickets <= 8) {
		printf("Ticket prices are as follows: \n");
		printf("	Ticket Category			Ticket Price \n");
		printf("H.	Hogan Stand				%.2f \n", HS);
		printf("D.	Davin Stand				%.2f \n", DS);
		printf("C.	Cusack Stand				%.2f \n", CS);

		printf("Please enter the character corrisponding to the ticket: ");

		scanf("%c", &stand);

		switch (stand, toupper(stand))
		{
			case 'H':
				total_cost = no_tickets * HS;
				printf("The total cost of your tickets is : %.2f", total_cost);
				break;
			case 'D':
				total_cost = no_tickets * DS;
				printf("The total cost of your tickets is : %.2f", total_cost);
				break;
			case 'C':
				total_cost = no_tickets * CS;
				printf("The total cost of your tickets is : %.2f", total_cost);
				break;
			default:
				printf("Please enter in a correct entry.");
				break;
		}
	}
	return 0;

}