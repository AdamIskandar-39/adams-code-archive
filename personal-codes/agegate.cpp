#include <iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Enter your age: ";
	cin>>age;
	
	if (age >= 18)
		cout<<"You can buy M-rated games.";
	else if (age >= 13 && age <= 17)
		cout<<"Sorry, you are not allowed to buy M-rated games. Instead, you can buy T-rated games.";
	else
		cout<<"Sorry, you can only buy E-rated games";
	return 0;
}
