#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> vstr = {"111.222", "222.222", "333.333"};
	auto iter = vstr.begin();
	double sum = 0;

	while(iter != vstr.end())
	{
		sum += stod(*iter);
		iter++;
	}
	cout << sum << endl;

	return 0;
}
