#include <iostream>
using namespace std;
int main()
{
	int digit = 0, highestNum = 0, i = 1;
	cout<<"Type in five digits (press Enter after typing each digit): \n";
	while (i <= 5)
		{
			cin>>digit;
			if (digit > highestNum)
				highestNum = digit;
			i++;
		}
		cout<<"The highest number is: "<<highestNum;
		return 0;
}
