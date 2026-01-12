#include <iostream>
#include <string>
using namespace std;
int main()
{
	// initialize variables
	string productCode;
	float productQty = 0.0, wholesalePrice = 0.0, totalPrice = 0.0, totalPreTax = 0.0;
	
	cout<<"Enter product code: ";
	cin>>productCode;
	
	cout<<"Enter product quantity: ";
	cin>>productQty;
	
	if (productCode == "AA" || productCode == "aa")
		{
			if (productQty >= 10 && productQty <= 50)
				totalPreTax = productQty * 2.0;
			else if (productQty >= 51 && productQty <= 100)
				totalPreTax = productQty * 1.5;
			else if (productQty > 100)
				totalPreTax = productQty * 1.0;
			else
				cout<<"You need to order at least 10 of the product."<<endl;
		}
	else if (productCode == "BB" || productCode == "bb")
		{
			if (productQty >= 20 && productQty <= 50)
					totalPreTax = productQty * 5.0;
			else if (productQty > 50)
					totalPreTax = productQty * 4.0;
			else
				cout<<"You need to order at least 20 of the product."<<endl;
		}
	totalPrice = totalPreTax + (totalPreTax * 0.06);
	
	cout<<"Product code: "<<productCode<<endl;
	cout<<"Quantity: "<<productQty<<endl;
	cout<<"Total price before tax: "<<totalPreTax<<endl;
	cout<<"Total price (with 6% GST): "<<totalPrice;
	
	return 0;
}
