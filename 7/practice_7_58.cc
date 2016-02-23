#include <iostream>
#include <vector>

using namespace std;


class Example
{
	public:
		//需要是常量
		constexpr static double rate = 6.5;
		constexpr static int vecSize = 20;
		//在类中，我们不应该对vector进行初始化，这里编译器就把vec当成了函数,然后
		//报错：error: unknown type name 'vecSize'
		//提示没有vecSize这样的类型
//		static vector<double> vec(vecSize);
		//修改如下：
		static vector<double> vec;
};


constexpr double Example::rate;
//这里定义vec，指定大小
vector<double> Example::vec(Example::vecSize);
