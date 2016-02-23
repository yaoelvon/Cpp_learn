#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> svec;
	svec.reserve(1024);
	string word;
	//不断的读取
	while(cin >> word)
	{
		svec.push_back(word);
	}
	//从cin中读取了n个元素，这里在末尾增加n/2个元素，可能会导致存储内存容量变化
	svec.resize(svec.size() + svec.size() / 2);

	return 0;
}
