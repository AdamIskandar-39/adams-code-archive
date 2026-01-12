#include <iostream>
using namespace std;
void rangeSum();

int main()
{
	rangeSum();
	return 0;
}

void rangeSum()
{
	int m = 0, x = 0, sum = 0;
	cout<<"Enter minimum value: ";
	cin>>m;
	cout<<"Enter maximum value: ";
	cin>>x;
	for (int i = m; i <= x; i = i + 1)
		sum = sum + i;
	cout<<"The summation of the specified range: "<<sum;
}
