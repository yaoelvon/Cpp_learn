#include <iostream>
#include <numeric>//accumulate函数的头文件
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<double> vInteger{100.100, 200.2, 300.3, 400.4, 500.5, 600.6, 700.7, 800.8, 900.9};

	double sum = accumulate(vInteger.cbegin(), vInteger.cend(), 0);

	cout << "sum: " << sum << endl;
	//打印出来结果是4500
	//因为accumulate函数的第三个参数是和的初值，它还决定了函数的返回类型，以及函数中
	//使用哪个加法运算符。本题中第三个参数0告知accumulate和是整型的，使用整型加法运算符。

	return 0;
}
