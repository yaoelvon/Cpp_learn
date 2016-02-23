//形参和函数体内部定义的变量统称为局部变量，所以它们是一样的，都是自动对象，函数开始时为它们分配存储空间，当函数终止，它们就被销毁，空间释放。
//而局部静态变量是在程序的执行路径第一次经过对象定义语句时初始化，而且直到程序终止才被销毁，在此期间即使对象所在的函数结束执行也不会对它有影响。


#include <iostream>

using namespace std;

int func(int i1)
{
	int i2 = 1;
	static int i3 = 1;

	cout << i1 + i2 + i3 << endl;
	i3++;

	return 0;
}

int main(int argc, const char *argv[])
{
	while(1)
	{
		func(1);
	}
	
	return 0;
}
