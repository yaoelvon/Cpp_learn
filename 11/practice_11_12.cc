#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<pair<string, int>> vps;
	pair<string, int> ps;
	string s;
	int i;

	while(cin >> s)
	{
		cin >> i;
		ps = make_pair(s, i);
		vps.push_back(ps);
	}

	for(auto &w : vps)
	{
		cout << w.first << " " << w.second << endl;
	}

	return 0;
}
