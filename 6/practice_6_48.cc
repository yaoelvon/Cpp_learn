#include <iostream>
#include <cassert>

using namespace std;

int main(int argc, const char *argv[])
{
	string s;

	//循环的定义：等待输入，直到输入的字符串为“hello”
	while(cin >> s && s != "hello")
	{

	}
	//合理,用于检查循环的退出原因
	assert(cin);

	return 0;
}
