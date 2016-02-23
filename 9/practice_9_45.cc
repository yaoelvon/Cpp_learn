#include <iostream>
#include <string>
#include <iterator>

using namespace std;

string &func(string &str_name, string const &prev_name, string const &end_name)
{
	auto beg = str_name.begin();
	//注意insert使用迭代器时，只支持n,c  b2,e2  和 初始化列表的args
	str_name.insert(beg, prev_name.begin(), prev_name.end());
	str_name.append(end_name);

	return str_name;
}

int main(int argc, const char *argv[])
{
	string name = {"hellen"};

	cout << func(name, "Ms.", "Jr.") << endl;

	return 0;
}
	
