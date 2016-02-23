#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	string s1, s2;

	cout << "please enter a serial of words: " << endl;
	while(cin >> s2)
	{
		if(s2.empty())
			continue;
		if(s2[0] < 65 || s2[0] > 90)
		{
			s1 = s2;
			continue;
		}

		if(s2 != s1)
		{
			s1 = s2;
		}
		else
		{
			cout << s1 << " and " << s2 << " is same!" << endl;
			break;
		}

	}
	cout << "end!" << endl;

	return 0;
}
