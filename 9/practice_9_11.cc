//六种创建和初始化vector对象的方法：

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	//默认初始化，为空
	vector<int> vi1;

	//以vi1初始化为vi2的拷贝
	vector<int> vi2_1(vi1);
	vector<int> vi2_2 = vi1;

	//内容为1，2，3
	vector<int> vi3_1{1, 2, 3};
	vector<int> vi3_2 = {1, 2, 3};

	//内容同vi3
	vector<int> vi4(vi3_2.begin(), vi3_2.end());

	//10个值为0的vector
	vector<int> vi5(10);

	//10个值为1的vector
	vector<int> vi6(10, 1);

	return 0;
}
