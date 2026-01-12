#include <iostream>
using namespace std;
int main()
{
	char text1[30];		// this accepts input with spaces up to 30 characters
	
	cout<<"Please enter text: ";
	gets(text1);
	
	cout<<endl<<"You typed: "<<text1<<endl;
	return 0;
}
