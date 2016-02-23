#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int string_to_change(string &s, string const &oldVal, string const &newVal)
{
	auto iter = s.begin();

	while(distance(iter, s.end()) >= oldVal.size())
	{
		if(*iter == oldVal[0] && (string(iter, next(iter, oldVal.size())) == oldVal))
		{
			//pos指向当前迭代器
			int pos = distance(s.begin(), iter);
			s.replace(pos, oldVal.size(), newVal);
			//将pos指向插入newVal后的末尾
			pos = pos + newVal.size();
			//将迭代器指针指向插入后的位置
			iter = s.begin() + pos;
		}
		else
		{
			++iter;
		}
	}

	return 0;
}

int main(int argc, const char *argv[])
{
	string str{"tho i am just test, thru just cpp 5th!tho i am just test, thru just cpp 5th!"};

	cout << str << endl;
	string_to_change(str, "tho", "though");
	cout << str << endl;
	string_to_change(str, "thru", "through");
	cout << str << endl;
	
	return 0;
}
