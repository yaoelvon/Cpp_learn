#include <iostream>
#include <vector>

using namespace std;

using PF = int(*)(int, int);

int add(int i1, int i2)
{
	return i1 + i2;
}

int subtrack(int i1, int i2)
{
	return i1 - i2;
}

int multiply(int i1, int i2)
{
	return i1 * i2;
}

int divide(int i1, int i2)
{
	return i1 / i2;
}

int main(int argc, const char *argv[])
{
	vector<PF> vpf;

	vpf.push_back(add);
	vpf.push_back(subtrack);
	vpf.push_back(multiply);
	vpf.push_back(divide);

	return 0;
}
