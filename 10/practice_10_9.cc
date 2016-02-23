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

	for(auto s : vString)
	{
		cout << s << " ";
	}
	cout << endl;



	return 0;
}
