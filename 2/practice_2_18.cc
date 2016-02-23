#include <iostream>

int main()
{
	int *ip1;
	int i1 = 12;
	int i2 = 13;
	ip1 = &i1;
	std::cout << ip1 << " ip1 = " << *ip1 << std::endl;
	ip1 = &i2;
	std::cout << ip1 << " ip1 = " << *ip1 << std::endl;
	*ip1 = 14;
	std::cout << ip1 << " ip1 = " << *ip1 << std::endl;

	return 0;
}
