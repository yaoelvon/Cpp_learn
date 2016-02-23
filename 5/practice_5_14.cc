#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> vString;
	string s;
	int count = 1;

	while(cin >> s)
	{
		vString.push_back(s);
	}

	auto beg = vString.begin();

	while(beg != vString.end())
	{
		if(*beg == *(beg + 1))
		{
			count++;
		}
		else
		{
			cout << "word is " << *beg << ", times is " << count << endl;
			count = 1;
		}
		beg++;
	}

	return 0;
}
