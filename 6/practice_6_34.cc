#include <iostream>

using namespace std;

int factorial(int val)
{
	if(val != 0)
	{
		return factorial((val - 1)) * val;
	}

	return 1;
}

int main(int argc, const char *argv[])
{
	int i = 10;
	int tmp = factorial(i);
	cout << tmp << endl;

	return 0;
}
