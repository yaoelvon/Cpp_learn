#include <iostream>

using namespace std;


string sa[10];//空字符串
int ia[10];//全局变量，初始化为0
int main()
{
	string sa2[10];//空字符串
	int ia2[10];//未知

	for(auto c : sa)
		cout << c << " ";
	cout << endl;

	for(auto c : ia)
		cout << c << " ";
	cout << endl;

	for(auto c : sa2)
		cout << c << " ";
	cout << endl;

	for(auto c : ia2)
		cout << c << " ";
	cout << endl;

	return 0;
}

