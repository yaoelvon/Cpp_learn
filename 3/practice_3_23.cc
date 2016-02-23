#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	vector<int> vInt;

	srand((unsigned)time(NULL));		//生成随机数种子

	for(int i = 0; i < 10; i++)
	{
		//循环生成1000以内的随机数并添加到vInt中
		vInt.push_back(rand() % 1000);
	}

	for(auto it = vInt.begin(); it != vInt.end(); it++)
	{
		*it *= 2;
		cout << *it << " ";
	}

	return 0;
}
