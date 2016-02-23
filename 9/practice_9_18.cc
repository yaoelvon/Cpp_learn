#include <iostream>
#include <string>
#include <deque> //双向队列的头文件

using namespace std;

int main(int argc, const char *argv[])
{
	string str_nb;
	deque<string> destr;

	while(cin >> str_nb)
	{
		destr.push_back(str_nb);
	}

	auto beg = destr.cbegin();
	auto end = destr.cend();

	while(beg != end)
	{
		cout << *beg << endl;
		beg++;
	}

	return 0;
}
