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

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDumps(words);
	stable_sort(words.begin(), words.end(), 
			[](const string &a, const string &b)
			{ return a.size() < b.size(); });

	auto wc = partition(words.begin(), words.end(),
				[sz](const string &a)
				{ return a.size() >= sz; });

	auto count = wc - words.begin();
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;

	for_each(words.begin(), wc,
			[](const string &s){ cout << s << " ";});
	cout << endl;
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

	biggies(vString, 4);

	return 0;
}
