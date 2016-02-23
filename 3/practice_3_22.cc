#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> text;
	string s;

	/* 回车后无法终止输入，需要回车后再键入ctrl+d来表示文件末尾 */
	/*
	while(getline(cin, s))
		text.push_back(s);
	*/
	/* 下面可以实现 */ 
	getline(cin, s);
	text.push_back(s);

	/* 将一行行数据在外层循环中 */
	for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
	{
		//内层处理每行数据，将其从小写改成大写
		for(auto it2 = it->begin(); it2 != it->end(); it2++)
		{
			*it2 = toupper(*it2);
		}
		cout << *it << endl;
	}

	return 0;
}
