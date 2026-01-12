#include <iostream>
#include <string>
using namespace std;
int main()
{
	// initialize variables
	int movieCode = 0, numberOfTickets = 0;
	string movieTitle, usePaymentCode;
	float ticketPrice = 0.00, newPrice = 0.00;
	
	cout<<"Type \"1\" for Frozen or \"2\" for Spiderman: ";
	cin>>movieCode;
	cout<<"Type in quantity of tickets purchased: ";
	cin>>numberOfTickets;
	cout<<"Use payment code C? (Y/N): ";
	cin>>usePaymentCode;
	
	if (movieCode == 1)
		{
			ticketPrice = numberOfTickets * 20;
			movieTitle = "Frozen";
		}
	else
		{
			ticketPrice = numberOfTickets * 25;
			movieTitle = "Spiderman";
		}
		
	if (usePaymentCode == "Y"|| usePaymentCode == "y")
		ticketPrice = ticketPrice * 1.10;
		
	cout<<"Movie name: "<<movieTitle<<endl;
	cout<<"Ticket price: RM"<<ticketPrice;
	
	return 0;
}
