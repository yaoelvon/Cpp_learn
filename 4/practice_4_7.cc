//溢出是什么？
//这里所说的是数值溢出，当一个数的值超过了它能表示数的范围上下限时，就是数值溢出

//比如int型给的数值大小超过32位
//short型大小超过65535

#include <iostream>

using namespace std;

int main()
{
	int i = 0;

	i = 0xffffffff + 1;
	cout << i << endl;//output 0

	short st = 0;
	st = 65536;
	cout << st << endl;

	char c = 0;
	c = 128;
	cout << c << endl;

	return 0;
}
