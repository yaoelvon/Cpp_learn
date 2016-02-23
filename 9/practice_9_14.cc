#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	list<const char *> lc = {"hello", "world"};

	vector<string> vs;

	vs.assign(lc.begin(), lc.end());

	return 0;
}
