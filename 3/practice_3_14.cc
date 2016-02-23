#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt;
	int i;
	char cont = 'y';

	/* read a serial of integers from cin */
	while(cin >> i)
	{
		vInt.push_back(i);/* save to vInt vector */
		cout << "你要继续吗(y or n)?" << endl;
		cin >> cont;
		if(cont != 'y' && cont != 'Y')
		{
			break;
		}
	}

	for(auto mem : vInt)
	{
		cout << mem << " ";
	}
	cout << endl;

	return 0;
}
