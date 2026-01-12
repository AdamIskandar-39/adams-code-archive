#include <iostream>
using namespace std;
int main()
{
	int digit = 0, highestNum = 0;
	cout<<"Type in five digits (press Enter after typing each digit): \n";
	for (int i = 1; i <= 5; i = i + 1)
		{
			cin>>digit;
			if (digit > highestNum)
				highestNum = digit;
		}
		cout<<"The highest number is: "<<highestNum;
		return 0;
}
