#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

//由于允许重复关键字，所以不需要vector保存同一家的孩子的名字列表，直接保存每个孩子的（姓，名）pair即可。
//容器类型变为multimap<string, string>
void add_child(multimap<string, string> &families, const string &family, const string &child)
{
	families.insert({family, child});
}

int main(int argc, const char *argv[])
{
	multimap<string, string> families;

	add_child(families, "张", "强");
	add_child(families, "张", "刚");
	add_child(families, "王", "五");
	add_child(families, "刘", "刚");

	for(auto f : families)
	{
		cout << f.first << "家的孩子： " << f.second << endl;
	}

	return 0;
}
