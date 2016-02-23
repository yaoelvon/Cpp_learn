#include <iostream>

using namespace std;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

void f()
{
	cout << "f()" << endl;
	return;
}

void f(int i)
{
	cout << "f(" << i << ")"  << endl;
	return;
}

void f(int i1, int i2)
{
	cout << "f(" << i1 << ", " << i2 << ")" << endl;
	return;
}

void f(double d1, double d2)
{
	cout << "f(double, double = 3.14) "<< d1 << " " << d2 << endl;
	return;
}


int main(int argc, const char *argv[])
{
	//f(2.56, 42);

	f(42);

	f(42, 0);
	f(2.56, 3.14);
	return 0;
}
