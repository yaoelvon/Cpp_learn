#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> vString = {"a", "a", "small", "cat", "cat", "run", "away"};

	list<string> lStr;

	unique_copy(vString.begin(), vString.end(), back_inserter(lStr));

	for(auto s : lStr)
	{
		cout << s << " ";
	}
	cout << endl;
	
	return 0;
}
