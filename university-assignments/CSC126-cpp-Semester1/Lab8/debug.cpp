#include <iostream>
using namespace std;
int main()
{
	int var1 = 0.00, var2 = 0.00, var3 = 0.00;
	cout<<"Insert first digit: ";
	cin>>var1;
	cout<<"Insert second digit: ";
	cin>>var2;
	var3 = var1 % var2;
	cout<<"Remainder is: "<<var3;
	return 0;
}
