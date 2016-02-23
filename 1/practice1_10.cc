#include <iostream>

int main()
{
	int val = 10;
	int sum = 0;

	while(val > 0)
	{
		sum += val;
		--val;
	}

	std::cout << "sum of 1~10 is " << sum << std::endl;

	return 0;
}
