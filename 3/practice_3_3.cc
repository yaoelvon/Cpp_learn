#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, line;
	cout << "请选择读入字符串的方式： 1 表示逐词读取，2 表示整行读取" << endl;
	char ch;
	cin >> ch;
#if 1 
	if(ch == '1')
	{
		cout << "请输入字符串： Welcome to C++ family! " << endl;
		cin >> word;
		cout << "系统读取的有效字符串是： " << endl;
		cout << word << endl;
		return 0;
	}
#endif
	//情况输入缓冲区
	cin.clear();
	cin.sync();
	if(ch == '2')
	{
		cout << "请输入字符串： Welcome to C++ family! " << endl;

		getline(cin, line);

		cout << "系统读取的有效字符串是: " << endl;
		cout << line << endl;
		return 0;
	}
	cout << "您的输入有误" << endl;
	
	return -1;
}
