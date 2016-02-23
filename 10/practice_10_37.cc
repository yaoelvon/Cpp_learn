#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	list<int> li;

	auto begin = vi.rbegin();
	auto riter1 = begin;
	for(int i = 0; i < 3; ++i)
	{
		riter1++;
	}
	auto riter2 = begin;
	for(int i = 0; i < 8; ++i)
	{
		riter2++;
	}

	copy(riter1, riter2, back_inserter(li));

	for(auto i : li)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
