#include <iostream>

using namespace std;

int abosulate(int val)
{
	return val > 0 ? val : -val;
}

int main(int argc, const char *argv[])
{
	int val = 0;

	cout << "please enter a number:" << endl;
	cin >> val;
	cout << abosulate(val) << endl;
	return 0;
}
