#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int i1, i2;

	cout << "please enter two integer: " << endl;

	cin >> i1 >> i2;
	if(i2 == 0)
	{
		cout << "i2 is 0, error!" << endl;
		return -1;
	}
	else
	{
		cout << "i1/i2 = " << i1 / i2 << endl;
	}

	return 0;
}
