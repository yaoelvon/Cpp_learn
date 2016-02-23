#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int x[10];
	int *p = x;

	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;//64位机，地址为64位，8字节长度，int型为4字节长度

	return 0;
}
