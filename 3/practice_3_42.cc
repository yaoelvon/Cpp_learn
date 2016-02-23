#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInteger(5, 6);
	int ia[5] = {0};

	int count = 0;
	for(auto i : vInteger)
	{
		ia[count++] = i;
	}

	for(int i = 0; i < 5; i++)
	{
		cout << ia[i] << " ";
	}
	cout << endl;

	return 0;
}
