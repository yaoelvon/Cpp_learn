#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

string &trans(string &s)
{
	for(int p = 0; p < s.size(); p++)
	{
		if(s[p] >= 'A' && s[p] <= 'Z')
			s[p] -= ('A' - 'a');
		else if(s[p] == ',' || s[p] == '.')
		{
			s.erase(p, 1);
		}
	}

	return s;
}

int main(int argc, const char *argv[])
{
	string word;
	set<string> ss;

	while(cin >> word)
	{
		word = trans(word);
		ss.insert(word);
	}

	for(auto &s : ss)
	{
		cout << s << " ";
	}
	cout << endl;

	return 0;
}

