#include <iostream>

using namespace std;

bool str_subrange(const string &str1, const string &str2)
{
	if(str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size())
				? str1.size() : str2.size();

	for(decltype(size) i = 0; i != size; i++)
	{
		if(str1[i] != str2[i])
			return;//报错：没有返回值
	}
	//检测不到这里缺少一个return
}

int main(int argc, const char *argv[])
{
	string s1 = "i love china";
	string s2 = "i love you";

	str_subrange(s1, s2);
	return 0;
}
