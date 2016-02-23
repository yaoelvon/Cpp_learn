#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char *s1 = "i am test";
	char *s2 = "i am test";

	if(strlen(s1) != strlen(s2))
	{
		cout << "not equal!" << endl;
	}
	else
	{
		int ret = 0;
		ret = strcmp(s1, s1);
		if(ret != 0)
		{
			cout << "not equal!" << endl;
		}
		else
		{
			cout << "equal" << endl;
		}
	}

	return 0;
}
