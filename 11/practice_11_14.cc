#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;

/*
 * 添加姓
 */
void add_family(map<string, vector<pair<string, string>>> &families, const string &family)
{
	if(families.find(family) == families.end())
	{
		families[family] = vector<pair<string, string>>();
	}
}

/*
 * 添加孩子成员
 */
void add_child(map<string, vector<pair<string, string>>> &families, const string &family, const string s1, const string s2)
{
	families[family].push_back(pair<string, string> ({s1, s2}));
}

int main(int argc, const char *argv[])
{
	map<string, vector<pair<string, string>>> families;

	add_family(families, "张");
	add_child(families, "张", "强", "19910125");
	add_child(families, "张", "刚", "19900221");
	add_child(families, "王", "五", "19921221");
	add_family(families, "王");

	for(auto f : families)
	{
		cout << f.first << "家的孩子： ";
		for(auto c : f.second)
		{
			cout << c.first << " " << c.second << endl;
		}
	}

	return 0;
}
