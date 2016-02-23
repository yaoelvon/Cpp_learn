#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vInteger;

	for(int i = 0; i < 10; i++)
	{
		vInteger.push_back(i);
	}

	//range for
	/*
	for(auto &i : vInteger)
	{
		if(i % 2 == 1)
			i *= 2;
	}
	*/

	//iterator way
	for(auto it = vInteger.begin(); it != vInteger.end(); it++)
	{
		if(*it % 2 == 1)
			*it *= 2;
	}

	for(auto i : vInteger)
		cout << i << " ";
	cout << endl;

	return 0;
}
