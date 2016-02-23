#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt;
	int tmp = 0;

	cout << "Please input a serial integers: " << endl;
	while(cin >> tmp)
	{
		vInt.push_back(tmp);
	}

	if(vInt.size() == 0)
		return -1;

	for(decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2)
	{
		cout << vInt[i] + vInt[i+1] << " ";
		if((i + 2) % 10 == 0)
		{
			cout << endl;
		}
	}
	if(vInt.size() % 2 != 0)
		cout << vInt[vInt.size() - 1];

	return 0;
}
