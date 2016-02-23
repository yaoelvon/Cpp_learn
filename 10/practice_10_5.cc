#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

//string类中重载了==，可以比较两个字符串是否长度相等且其中元素对应相等
//而C风格字符串的本质是char *类型，用==比较两个char*对象，
//只是检查两个指针是否相等，而不会比较其中的字符串。

int main(int argc, const char *argv[])
{
	list<const char *> roster1{"hello", "world"};
	list<const char *> roster2{"hello", "world", "everay"};//和第一个地址相同
	list<const char *> roster3{strdup("hello"), strdup("world")};//和第一个地址不同


	cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;
	cout << equal(roster1.cbegin(), roster1.cend(), roster3.cbegin()) << endl;
	return 0;
}
