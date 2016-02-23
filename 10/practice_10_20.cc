#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

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

	int true_count = 0;
	true_count = count_if(vString.begin(), vString.end(),
			[](const string &s){ return s.size() > 6; });

	cout << true_count << endl;

	return 0;
}
