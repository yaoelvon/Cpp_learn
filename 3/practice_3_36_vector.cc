//比较两个vector对象是否相等
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInteger1(3, 6);
	vector<int> vInteger2(3, 5);

	if(vInteger1.size() != vInteger2.size())
		cout << "vector not equal!" << endl;
	else
	{
		//auto it1 = vInteger1.cbegin();
		//auto it2 = vInteger2.cbegin();
		for(auto it1 = vInteger1.cbegin(), it2 = vInteger2.cbegin(); (it1 != vInteger1.cend()) && (it2 != vInteger2.cend()); it1++, it2++)
		{
			if(*it1 != *it2)
			{
				cout << "vector not equal!" << endl;
				return 0;
			}
		}
		cout << "vector equal!" << endl;
	}

	return 0;
}
