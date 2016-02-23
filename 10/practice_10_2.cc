#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	string word;
	list<string> lst;

	while(cin >> word)
	{
		lst.push_back(word);
	}

	string match_str = "hello";

	auto result = count(lst.begin(), lst.end(), match_str);
	cout << endl;

	cout << result << endl;


	return 0;
}
