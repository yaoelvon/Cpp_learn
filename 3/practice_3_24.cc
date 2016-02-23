#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt;
	int iVal;

	cout << "please input ten integers: " << endl;

	while(cin >> iVal)
		vInt.push_back(iVal);

	if(vInt.cbegin() == vInt.cend())
	{
		cout << "no any elements" << endl;
		return -1;
	}

	//官方的答案出错，判读部分只有前半部分时,由于代码段对it进行了移位，所以当输入数字
	//个数为双数时，最后判断结束部分会跳过，导致死循环，段错误；
	for(auto it = vInt.cbegin(); it != vInt.cend() - 1 && it != vInt.cend(); it++)
	{
		cout << *it + *(++it) << " ";
		if((it - vInt.cbegin() + 1) % 10 == 0)
			cout << endl;
	}

	return 0;
}
