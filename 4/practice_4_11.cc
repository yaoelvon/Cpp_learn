#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int a, b, c, d;
	cout << "please input a b c d one by one: " << endl;
	cin >> a >> b >> c >> d;

	if((a > b) && (b > c) && (c > d))
	{
		cout << "a > b > c > d" << endl;
	}
	else
	{
		cout << "not so" << endl;
	}

	return 0;
}
