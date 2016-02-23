//数组没有进行初始化，里面的值是随即的，无法预测，下面用程序运行下就知道了
#include <iostream>

using namespace std;

int main()
{
	unsigned scores[11];
	unsigned grade;
	while(cin >> grade)
	{
		if(grade <= 100)
			++scores[grade/10];
	}

	for(auto i : scores)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

//输出的前两位是很大的值，没有输入任何数据的输出结果:
//1383844704 32767 0 0 0 0 0 0 0 0 0
