#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> vstr = {"111", "222", "333"};
	auto iter = vstr.begin();
	int sum = 0;

	while(iter != vstr.end())
	{
		sum += stoi(*iter);
		iter++;
	}
	cout << sum << endl;

	return 0;
}
