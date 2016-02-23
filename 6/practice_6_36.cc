#include <iostream>
#include <string>

using namespace std;

string (&func())[10];


string (arrS)[10] = {"1", "2", "3", "4", "5", "6" ,"7" ,"8" ,"9", "10"};

string (&func())[10]
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

