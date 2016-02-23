#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	int val = 0;
	int max = 0, min = 0;
	int sum = 0;

	std::cout << "Please Enter Two numbers:"
			<< std::endl;
	std::cin >> v1 >> v2;

	if(v1 >= v2)
	{
		max = v1;
		min = v2;
	}
	else
	{
		max = v2;
		min = v1;
	}

	val = min;

	while(val <= max)
	{
		sum += val;
		++val;
	}

	std::cout << "sum of " << min << " - " << max << " is " << sum << std::endl;

	return 0;
}
