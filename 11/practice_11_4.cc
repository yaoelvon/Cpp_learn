#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
#include <utility>//pair

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
	map<string, size_t> word_count;
	set<string> exclude = {"The", "But", "And", "Or", "An", "A", 
						"the", "but", "and", "or", "an", "a"};
	string word;
	while(cin >> word)
	{
		word = trans(word);
		if(exclude.find(word) == exclude.end())
		{
			++word_count[word];
		}
	}

	for(const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;
	}

	return 0;
}

