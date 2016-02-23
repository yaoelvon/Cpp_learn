#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

int len_less_equal_six(const string &s, const int sz)
{
	return s.size() <= sz;
}

int main(int argc, const char *argv[])
{
	vector<string> vString;
	string word;
	int sz = 6;

	while(cin >> word)
	{
		vString.push_back(word);
	}

	for(auto s : vString)
	{
		cout << s << " ";
	}
	cout << endl;

	int true_count = 0;
	true_count = count_if(vString.begin(), vString.end(),

			bind(len_less_equal_six, _1, sz));

	cout << true_count << endl;

	return 0;
}
