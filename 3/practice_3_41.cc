//允许数组来初始化vector对象

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ia[5] = {0, 1, 2, 3, 4};

	vector<int> vInteger(begin(ia), end(ia));
	for(auto i : vInteger)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
