#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt;
	int iVal;
	cout << "please input a serial numbers: " << endl;

	while(cin >> iVal)
		vInt.push_back(iVal);
	if(vInt.cbegin() == vInt.cend())
	{
		cout << "no any elements" << endl;
		return -1;
	}

	cout << "首位两项和依次是: " << endl;
	auto beg = vInt.begin();
	auto end = vInt.end();

	for(auto it = beg; it != beg + (end - beg) / 2; it++)
	{
		//类似指针和位移量的相加
		cout << (*it + *(beg + (end - it) - 1)) << " ";
		if((it - beg +1) % 5 == 0)
			cout << endl;
	}

	if(vInt.size() % 2 != 0)
	{
		cout << *(beg + (end - beg) / 2);
	}

	return 0;
}
