#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	auto f = [](const int i1, const int i2) { return i1 + i2; };

	cout << f(1, 2) << endl;
	return 0;
}
