#include <iostream>
using namespace std;
int main()
{
	int n = 0, sum = 0;
	cout<<"Type a number: ";
	cin>>n;
	for (int i = 1; i <= n; i = i + 1)
		sum = sum + i;
		
	cout<<"The sum of the numbers leading up to "<<n<<" is: "<<sum;
	return 0;
}
