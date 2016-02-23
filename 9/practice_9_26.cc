#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, const char *argv[])
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> vInteger;
	list<int> lInteger;

	for(int i = 0; i < sizeof(ia) / 4; i++)
	{
		vInteger.push_back(ia[i]);
		lInteger.push_back(ia[i]);
	}

	cout << "vInteger: ";
	for(auto i : vInteger)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "lInteger: ";
	for(auto i : lInteger)
	{
		cout << i << " ";
	}
	cout << endl;

	auto vit = vInteger.begin();
	auto lit = lInteger.begin();

	while(vit != vInteger.end())
	{
		if(*vit % 2)
		{
			vit = vInteger.erase(vit);
		}
		else
			++vit;
	}

	while(lit != lInteger.end())
	{
		if(*lit % 2)
		{
			++lit;
		}
		else
		{
			lit = lInteger.erase(lit);
		}
	}
	cout << "vInteger: ";
	for(auto i : vInteger)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "lInteger: ";
	for(auto i : lInteger)
	{
		cout << i << " ";
	}
	cout << endl;


	return 0;
}
