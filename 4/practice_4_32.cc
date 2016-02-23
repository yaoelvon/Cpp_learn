#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	constexpr int size = 5;
	int ia[size] = {1, 2, 3, 4, 5};
	
	//遍历数组
	for (int *ptr = ia, ix = 0;
			ix != size && ptr != ia + size;//逻辑与的优先级低于!=运算符
			++ix, ++ptr)
	{
		/**/
	}

	return 0;
}
