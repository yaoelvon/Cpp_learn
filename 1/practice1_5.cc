#include <iostream>

int main()
{
	int v1, v2;

	std::cout << "Enter two numbers:";
	std::cout << std::endl;
	std::cin >> v1;
	std::cin >> v2;
	std::cout << "The multi of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;

	return 0;
}
