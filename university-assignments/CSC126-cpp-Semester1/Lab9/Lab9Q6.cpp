#include <iostream>
using namespace std;
void rangeSum(int m, int x);

int main()
{
	int m = 0, x = 0;
	cout<<"Enter minimum value: ";
	cin>>m;
	cout<<"Enter maximum value: ";
	cin>>x;
	rangeSum(m, x);
	return 0;
}

void rangeSum(int m, int x)
{
	int sum = 0;
	for (int i = m; i <= x; i = i + 1)
		sum = sum + i;
	cout<<"The summation of the specified range: "<<sum;
}
