#include <iostream>
#include <string>

using namespace std;
//1. 写出类型全名
//2. 用尾置返回类型
//3. 用类型别名
//4. 用decltype

//1. string (&func())[10];
//2. auto func() -> string (&)[10];
//3. typedef string (arrSSS)[10];
//3. using arrSSS = string[10];


string (arrS)[10] = {"1", "2", "3", "4", "5", "6" ,"7" ,"8" ,"9", "10"};

/*
 * 1. 
string (&func())[10]
{
	return arrS;
}
*/
/* 2. 
auto func() -> string (&)[10]
{
	return arrS;
}
*/
/* 3.
arrSSS &func()
{
	return arrS;
}
*/

decltype(arrS) &func()
{
	return arrS;
}

int main(int argc, const char *argv[])
{
	string (&arrSS)[10] = func();


	for(auto s : arrSS)
	{
		cout << s  << endl;
	}
	
	return 0;
}

