#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int i;
	double d;

	d = i = 3.5;
	cout << "d = i =3.5" << endl;
	cout << "d: " << d << " i: " << i << endl;
	i = d = 3.5;
	cout << "i = d = 3.5" << endl;
	cout << "d: " << d << " i: " << i << endl;
	return 0;
}
