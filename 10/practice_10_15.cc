#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	int i1 = 1;
	auto f = [i1](const int i2) { return i1 + i2; };

	cout << f(2) << endl;
	return 0;
}
