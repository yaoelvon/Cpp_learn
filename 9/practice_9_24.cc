#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vint;

	//提示超出了vector的范围
	cout << vint.at(0)  << endl;
	//提示段错误
	//cout << vint[0] << endl;
	//提示段错误
	//cout << vint.front() << endl;
	//提示段错误
	//cout << *vint.begin() << endl;
	return 0;
}
