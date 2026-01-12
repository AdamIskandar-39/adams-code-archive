#include <iostream>
using namespace std;
int main ()
{
	// initialize vars
	char membershipStatus;
	int childrenTicketQty = 0, adultTicketQty = 0;
	float childrenTicketPrice = 0.00, adultTicketPrice =0.00, totalPrice = 0.00, discount = 0.00, discountedPrice = 0.00, netPrice = 0.00;
	
	cout<<"Welcome to Kid Fun Land Penang!"<<endl;
	
	cout<<"Enter amount of children: ";
	cin>>childrenTicketQty;
	
	cout<<"Enter amount of adults: ";
	cin>>adultTicketQty;
	
	cout<<"Are you a member? (Type 'M' for member, 'N' for non member): ";
	cin>>membershipStatus;
	
	if (membershipStatus == 'M' || membershipStatus == 'm')
		{
			childrenTicketPrice = 40.00;
			adultTicketPrice = 60.00;
		}
	else
		{
			childrenTicketPrice = 50.00;
			adultTicketPrice = 70.00;
		}
		
	totalPrice = (childrenTicketQty * childrenTicketPrice) + (adultTicketQty * adultTicketPrice);
	
	if (totalPrice > 200.00)
		discount = 0.17;
	else
		discount = 0.15;
	
	discountedPrice = totalPrice * discount;
	
	netPrice = totalPrice - discountedPrice;
	
	cout<<endl<<"Your receipt:"<<endl<<endl<<"Children ticket quantity (RM"<<childrenTicketPrice<<" per person) : "<<childrenTicketQty<<endl;
	cout<<"Adult ticket quantity (RM"<<adultTicketPrice<<" per person): "<<adultTicketQty<<endl<<"Total price: RM"<<totalPrice<<endl;
	cout<<"Discounted price: RM"<<discountedPrice<<" ("<<discount * 100<<"% discount)"<<endl<<"Net price: RM"<<netPrice;
	
	return 0;
		
}
