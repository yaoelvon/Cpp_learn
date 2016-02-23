#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<pair<string, int>> vps;
	string s;
	int i;

	while(cin >> s)
	{
		cin >> i;
		//1
		/*
		pair<string, int> ps;
		ps = make_pair(s, i);
		*/
		//2
		/*
		pair<string, int> ps(s, i);
		*/
		//3
		pair<string, int> ps = {s, i};
		vps.push_back(ps);
	}

	for(auto &w : vps)
	{
		cout << w.first << " " << w.second << endl;
	}

	return 0;
}
