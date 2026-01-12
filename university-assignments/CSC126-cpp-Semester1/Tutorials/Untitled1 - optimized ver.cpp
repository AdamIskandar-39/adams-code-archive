#include <iostream>
#include <string>
using namespace std;
int main()
{
	const float item_M1 = 5.00, item_M2 = 3.00, item_M3 = 2.00, item_M4 = 1.50;
	float totalM1 = 0.00, totalM2 = 0.00, totalM3 = 0.00, totalM4 = 0.00, totalPrice = 0.00;
	int countM1 = 0, countM2 = 0, countM3 = 0, countM4 = 0, itemQty = 0;
	string orderStatus, itemCode;
	
	orderStatus = "Y";
	cout<<"Welcome to MyCafe!"<<endl;
	
	while (orderStatus != "N" || orderStatus != "n")
		{
			cout<<"Enter item code (M1/M2/M3/M4) : ";
			cin>>itemCode;
			cout<<"Enter quantity : ";
			cin>>itemQty;
			if (itemCode == "M1")
				{
					totalM1 = totalM1 + (itemQty * item_M1);
					countM1 = countM1 + itemQty;
				}
			else if (itemCode == "M2")
				{
					totalM2 = totalM2 + (itemQty * item_M2);
					countM2 = countM2 + itemQty;
				}
			else if (itemCode == "M3")
				{
					totalM3 = totalM3 + (itemQty * item_M3);
					countM3 = countM3 + itemQty;
				}
			else if (itemCode == "M4")
				{
					totalM4 = totalM4 + (itemQty * item_M4);
					countM4 = countM4 + itemQty;
				}
			else
				cout<<"Wrong item code!"<<endl;
			
			cout<<"Do you want to make another order? (Y/N) : ";
			cin>>orderStatus;
			cout<<endl<<endl;
		}
	
	cout<<"Menu Item \t\t Quantity"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Chicken Burger "<<countM1<<endl;
	cout<<"Rainbow Fillet"<<countM2<<endl;
	cout<<"No-Salt Fries"<<countM3<<endl;
	cout<<"Soft-Drink"<<countM4<<endl;
	cout<<"-------------------------"<<endl;
	
	totalPrice = totalM1 + totalM2 + totalM3 + totalM4;
	cout<<"Total Price : RM"<<totalPrice;
	return 0;
}
