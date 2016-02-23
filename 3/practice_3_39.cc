#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "i love you ";
	string s2 = "i love you ";

	if(s1.size() != s2.size())
	{
		cout << "string is not equal!" << endl;
	}
	else
	{
		/*
		for(auto c1 = s1.cbegin(), c2 = s2.cbegin(); (c1 != s1.cend()) && (c2 != s2.cend()); c1++, c2++)
		{
			if(*c1 != *c2)
			{
				cout << "string is not equal!" << endl;
				return 0;
			}
		}
		*/
		if(s1 != s2)
		{
			cout << "string is not equal!" << endl;
		}
		else
		{
			cout << "string is equal!" << endl;
		}
	}

	return 0;
}
