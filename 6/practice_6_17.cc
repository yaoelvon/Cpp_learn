#include <iostream>
#include <string>

using namespace std;

int judge_capital(const string &s)
{
	for(auto c : s)
	{
		if(c >= 65 && c <= 90)
		{
			cout << "find a capital!" << endl;
			return 1;
		}
	}
	
	cout << "not any capital!" << endl;

	return 0;
}

int capital_to_small(string &s)
{
	for(auto &c : s)
	{
		if(c >= 65 && c <= 90)
		{
			c += 32;
		}
	}

	cout << "the string is " << s << endl;

	return 0;
}

int main(int argc, const char *argv[])
{
	string s = "Hello World!";

	judge_capital(s);
	capital_to_small(s);

	return 0;
}
