#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
}

int main(int argc, const char *argv[])
{
	list<string> lst{"hello", "world", "my", "name", "is", "hello", "jake"};

	elimDups(lst);

	for(auto s : lst)
	{
		cout << s << " ";
	}
	cout << endl;
	
	return 0;
}
