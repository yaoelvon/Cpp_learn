#include <iostream>
#include <numeric>//accumulate函数的头文件
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vInteger{100, 200, 300, 400, 500, 600, 700, 800, 900};

	int sum = accumulate(vInteger.cbegin(), vInteger.cend(), 0);

	cout << "sum: " << sum << endl;
	return 0;
}
