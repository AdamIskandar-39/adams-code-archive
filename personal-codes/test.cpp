#include <iostream>

int main()
{
	int speed;
	
	std::cout<<"Type the speed of the car: ";
	std::cin>>speed;
	
	if (speed > 80)
		std::cout<<"You are too fast!";
		
	return 0;
}
