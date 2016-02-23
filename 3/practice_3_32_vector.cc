#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt1;

	for(int i = 0; i < 10; i++)
	{
		vInt1.push_back(i);
	}

	vector<int> vInt2;

	for(auto i : vInt1)
	{
		vInt2.push_back(i);
	}

	for(auto i : vInt2)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
