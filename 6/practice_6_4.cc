#include <iostream>

using namespace std;

int fact(int val)
{
	int ret = 1;

	while(val > 1)
		ret *= val--;

	return ret;
}

int main(int argc, const char *argv[])
{
	int output = 0;
	int n = 0;

	cout << "please enter a number:" << endl;
	cin >> n;
	output = fact(n);
	cout << "output is " << output << endl;

	return 0;
}
