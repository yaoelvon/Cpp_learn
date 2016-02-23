#include <iostream>
#include <vector>
#include <string>
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
	vector<string> vs;

	string word;
	while(cin >> word)
	{
		word = trans(word);
		if(find(vs.begin(), vs.end(), word) == vs.end())
		{
			vs.push_back(word);
		}
	}

	for(auto &s : vs)
	{
		cout << s << " ";
	}
	cout << endl;

	return 0;
}

