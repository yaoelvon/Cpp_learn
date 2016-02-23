//使用insert操作的方式是：构造一个pair(单词，1),用insert将其插入容器，
//返回一个pair。若单词已经存在，则返回pair的second成员为false，
//表示插入失败，程序员需要通过返回pair的first成员（迭代器）递增已有
//单词的计数器。判断单词是否存在，并进行相关操作的工作完全是由程序员负责的。
//
//使用下标操作的方式是：以单词为下标获取元素值，若单词已经存在，则取出已有元素的值；
//否则，下标操作将pair(单词, 0)插入容器，提取出新元素的值。
//单词是否已存在的相关处理完全是由下标操作处理的，程序员不必关心，直接提取出值即可。
//
//所以对于单词计数程序，下标操作更简洁易读。
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	map<string, size_t> word_count;
	string word;
	while(cin >> word)
	{
		//ret的类型为pair<map<string, size_t>::iterator, bool>
		auto ret = word_count.insert({word, 1});
		if(!ret.second)//ret的第二个参数的值为false，表示这个单词已经存在
		{
			++ret.first->second;//递增计数器
		}
	}

	for(auto &w : word_count)
	{
		cout << w.first << " " << w.second << endl;
	}

	return 0;
}
