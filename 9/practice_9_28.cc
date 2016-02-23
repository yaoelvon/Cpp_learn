#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int forward_list_string(forward_list<string> &flst_str, string &str1, string &str2)
{
	auto prev = flst_str.before_begin();
	auto curr = flst_str.begin();
	
	while(curr != flst_str.end())
	{
		if(*curr == str1)
		{
			flst_str.insert_after(curr, str2);
			return 0;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	//在单链表末尾插入str2
	flst_str.insert_after(prev, str2);

	return 1;
}

int main(int argc, const char *argv[])
{
	forward_list<string> flst_str = {"hello", "world", "cpp", "5th"};
	string str1("hello");
	string str2("fucking");

	forward_list_string(flst_str, str1, str2);

	for(auto &s : flst_str)
	{
		cout << s << " ";
	}
	cout << endl;

	return 0;
}
