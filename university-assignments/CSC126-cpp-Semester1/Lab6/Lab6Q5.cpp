#include <iostream>
#include <string>
using namespace std;
int main()
{
	string letter;
	for (int i = 0; i <= 4; i = i + 1)
		{
			cout<<"Enter character "<<i<<": ";
			cin>>letter;
			if (letter == "n" || letter == "N")
				return 1;
		}
	return 0;
}
