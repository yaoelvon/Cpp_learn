#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;//a是一个整数
	const int ci = i, &cr = ci;
	auto b = ci;//b是一个整数， ci的顶层const特性被忽略了
	auto c = cr;//c是一个整数，顶层const特性被忽略
	auto d = &i;//d是整型指针
	auto e = &ci;//e是指向整型常量的指针
	auto &g = ci;//g是一个整型常量的引用，绑定到ci
	std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << e <<
		" " << g << std::endl;

	
	return 0;
}
