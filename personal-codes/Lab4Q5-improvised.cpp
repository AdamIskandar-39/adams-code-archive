#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	// initialize variables
	const double laptopPrice = 1500.00, tabPrice = 500.00, eDiskPrice = 200.00, thumbdrivePrice = 50.00;
	double totalLaptopPrice = 0.00, totalTabPrice = 0.00, total_ediskPrice = 0.00, total_tdrivePrice = 0.00;
	double totalAll = 0.00;
	int qtyLaptop = 0, qtyTab = 0, qty_edisk = 0, qty_tdrive = 0;
	
	cout<<"Osman Store Inventory \n\n";
	
	cout<<"Quantity of laptop: ";
	cin>>qtyLaptop;
	cout<<"Laptop price per unit (RM): "<<laptopPrice<<"\n\n";
	
	cout<<"Quantity of tab: ";
	cin>>qtyTab;
	cout<<"Tab price per unit (RM): "<<tabPrice<<"\n\n";
	
	cout<<"Quantity of external harddisk: ";
	cin>>qty_edisk;
	cout<<"External harddisk price per unit (RM): "<<eDiskPrice<<"\n\n";
	
	cout<<"Quantity of thumbdrive: ";
	cin>>qty_tdrive;
	cout<<"Thumbdrive price per unit (RM): "<<thumbdrivePrice<<"\n\n\n\n";
	
	totalLaptopPrice = laptopPrice * qtyLaptop;
	totalTabPrice = tabPrice * qtyTab;
	total_ediskPrice = eDiskPrice * qty_edisk;
	total_tdrivePrice = thumbdrivePrice * qty_tdrive;
	totalAll = totalLaptopPrice + totalTabPrice + total_ediskPrice + total_tdrivePrice;
	
	cout<<setw(12)<<left<<"ITEM"<<setw(24)<<internal<<"QUANTITY"<<setw(24)<<internal<<"PRICE PER UNIT"<<setw(22)<<right<<"TOTAL (RM) \n";
	cout<<"-------------------------------------------------------------------------------------------------- \n";
	cout<<setw(12)<<left<<"Laptop"<<setw(20)<<internal<<qtyLaptop<<setw(20)<<internal<<laptopPrice<<setw(24)<<internal<<totalLaptopPrice<<"\n";
	cout<<setw(12)<<left<<"Tab"<<setw(20)<<internal<<qtyTab<<setw(20)<<internal<<tabPrice<<setw(24)<<right<<totalTabPrice<<"\n";
	cout<<"External hard disk \t "<<qty_edisk<<"\t\t\t"<<eDiskPrice<<"\t\t"<<total_ediskPrice<<"\n";
	cout<<"Thumbdrive \t\t "<<qty_tdrive<<"\t\t\t"<<thumbdrivePrice<<"\t\t"<<total_tdrivePrice;
	cout<<"\n\n";
	cout<<"TOTAL ALL :"<<setw(60)<<internal<<"RM "<<totalAll;
	
	return 0;
}
