//重写书店程序，使用一个vector保存交易记录，使用不同算法完成处理。
//使用sort和compareIsbn函数来排序交易记录，然后使用find和accumulate求和。

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>
#include "Sales_item.h"

using namespace std;

int main(int argc, const char *argv[])
{
	vector<Sales_item> vs;
	istream_iterator<Sales_item> in_iter(cin);
	istream_iterator<Sales_item> eof;

	while(in_iter != eof)
	{
		vs.push_back(*in_iter++);
	}

	if(vs.empty())
	{
		cerr << "No data!" << endl;
		return -1;
	}

	sort(vs.begin(), vs.end(), compareIsbn);
	
	auto l = vs.begin();
	while(l != vs.end())
	{
		auto item = *l;
		//查找第一个ISBN与item不同的
		auto r = find_if(l + 1, vs.end(),
				[item](const Sales_item &item1)
				{ return item1.isbn() != item.isbn(); });
		//将范围[l, r)间的交易记录累加并输出
		cout << accumulate(l + 1, r, item) << endl;
		l = r;
	}

	return 0;
}


