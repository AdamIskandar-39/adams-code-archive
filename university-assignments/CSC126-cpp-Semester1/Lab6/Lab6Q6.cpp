#include <iostream>
using namespace std;
int main()
{
	int result = 0;
	for (int i = 1; i <= 10; i = i + 1)
		{
			result = i % 3;
			if (result == 0)
				cout<<i<<" is divisible by 3"<<endl;
		}
	return 0;
}
