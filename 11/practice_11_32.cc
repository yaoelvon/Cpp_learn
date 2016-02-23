#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	multimap<string, string> m;
	
	string auther("tang");

	m.insert({auther, "dream"});
	m.insert({auther, "love"});
	m.insert({auther, "summer"});

	for(auto &w : m)
	{
		cout << w.first << " " << w.second << endl;
	}

	return 0;
}
