#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> vst;
	string word;
	auto iter = vst.begin();

	while(cin >> word)
	{
		iter = vst.insert(iter, word);
	}

	for(auto &s : vst)
	{
		cout << s << endl;
	}

	return 0;
}
