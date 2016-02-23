//比较两个数组是否相等
//need to compare them one by one
#include <iostream>

using namespace std;

int main()
{
	int ia1[2] = {1, 2};
	int ia2[2] = {1, 2};

	if(sizeof(ia1) != sizeof(ia2))
	{
		cout << "array not equal" << endl;
	}
	else
	{
		for(int i = 0; i< sizeof(ia1) / sizeof(int); i++)
		{
			if(ia1[i] != ia2[i])
			{
				cout << "array not equal" << endl;	
				return 0;
			}
		}

		cout << "array equal" << endl;
		for(int i = 0; i< sizeof(ia1) / sizeof(int); i++)
		{
			cout << ia1[i]  << endl;
		}
	}

	return 0;
}

