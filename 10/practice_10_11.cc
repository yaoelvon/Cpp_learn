#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDumps(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	for(auto s : words)
	{
		cout << s << " ";
	}
	cout << endl;


	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main(int argc, const char *argv[])
{
	vector<string> vString;
	string word;

	while(cin >> word)
	{
		vString.push_back(word);
	}

	for(auto s : vString)
	{
		cout << s << " ";
	}
	cout << endl;

	elimDumps(vString);
	stable_sort(vString.begin(), vString.end(), isShorter);

	for(auto &s : vString)
	{
		cout << s << " ";
	}
	cout << endl;

	return 0;
}
