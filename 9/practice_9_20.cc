#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, const char *argv[])
{
	list<int> lint;
	int tmp;

	while(cin >> tmp)
	{
		lint.push_back(tmp);
	}

	cout << "all input numbers: " << endl;
	for(auto &i : lint)
	{
		cout << i << " ";
	}
	cout << endl;

	deque<int> dint1, dint2;

	for(auto &i : lint)
	{
		if(i % 2)
		{
			dint1.push_back(i);
		}
		else
		{
			dint2.push_back(i);
		}
	}

	cout << "奇数: " << endl;
	for(auto &i : dint1)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "偶数: " << endl;
	for(auto &i : dint2)
	{
		cout << i << " ";
	}
	cout << endl;


	return 0;
}
