//val-- 	会改变val的值
//factorial(val--) * val
//factorial(val-- --)
#include <iostream>

using namespace std;

int factorial(int val)
{
	if(val > 1)
	{
		cout << val << endl;
		//前置的--可以满足程序要求，而后置的--则无法满足，因为
		//后置--的功能是把原始值存储下来，在当前语句一直使用
		//原始值，直到当前语句结束，才会对原始值减一。
		//所以这里如果使用后置递减运算符，则会一直乘上val值
		//直到系统溢出，报错，段错误。。栈溢出，因为嵌套层数
		//过多
		return factorial((--val)) * val;
	}

	return 1;
}

int main(int argc, const char *argv[])
{
	int i = 10;
	int tmp = factorial(i);
	cout << tmp << endl;

	return 0;
}
