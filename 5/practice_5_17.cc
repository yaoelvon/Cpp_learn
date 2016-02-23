#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt1 = {0, 1, 1, 2};
	vector<int> vInt2 = {0, 1, 1, 2, 3, 5, 8};
	int iMax = 0;

	if(vInt1.size() < vInt2.size())
	{
		iMax = vInt1.size();
	}
	else
	{
		iMax = vInt2.size();
	}
	
	for(int i = 0; i< iMax; i++)
	{
		if(vInt1[i] != vInt2[i])
		{
			cout << "failse!" << endl;
			return 0;
		}
	}
	cout << "true!" << endl;

	return 0;
}
