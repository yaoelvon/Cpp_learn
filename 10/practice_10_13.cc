#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool string_over_five(string &s)
{
	return s.size() < 5;
}

int main(int argc, const char *argv[])
{
	vector<string> vString{"string", "test", "hello", "world", "hehe", "ivy", "bear2flymoon"};

	for(auto &s : vString)
	{
		cout << s << " ";
	}
	cout << endl;

	auto iter = partition(vString.begin(), vString.end(), string_over_five);

	while(iter != vString.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	return 0;
}
