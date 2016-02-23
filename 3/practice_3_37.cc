//数组中原先是想存放一个字符串，但是没有在字符串末尾加上字符串的结尾符'\0'
// 一直循环到遇到'\0'为止

#include <iostream>

using namespace std;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while(*cp)
	{
		cout << *cp << endl;
		++cp;
	}

	return 0;
}
