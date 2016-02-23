#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, const char *argv[])
{
	string str;
	list<string> lst;

	while(cin >> str)
	{
		lst.push_back(str);
	}

	auto beg = lst.cbegin();
	auto end = lst.cend();

	while(beg != end)
	{
		cout << *beg << endl;
		beg++;
	}

	return 0;
}
