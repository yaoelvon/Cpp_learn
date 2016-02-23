#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> vUS(11);
	auto it = vUS.begin();
	int iVal;

	cout << "please input a serial scores(0~100): " << endl;
	while(cin >> iVal)
		if(iVal < 101)
			++*(it + iVal / 10);

	cout << "your all input " << vUS.size() << " scores" << endl;
	cout << "scores of every section is (from low to high): " << endl;
	for(it = vUS.begin(); it != vUS.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
