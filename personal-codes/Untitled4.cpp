#include <iostream>
#include <cmath>
int totalOrbs = 400;
int main()
{
	for (int percent = 51; percent < 60; percent += 2)
	{
		float orbCount = (percent / 100.0);
		orbCount *= totalOrbs;
		int roundedCount = std::floor(orbCount);
		printf("[%i%%] %f -> %i orbs\n", percent, orbCount, roundedCount);
	}
	return 0;
}
