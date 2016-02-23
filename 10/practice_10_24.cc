#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

int main(int argc, const char *argv[])
{
	vector<int> vInteger{1, 2, 3, 4, 5, 6, 7, 8, 9};	
	string s("hello");

	bool ret = false;

	auto checks = bind(check_size, s, _1);

	for(auto i : vInteger)
	{
		ret = checks(i);
		if(ret == false)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
