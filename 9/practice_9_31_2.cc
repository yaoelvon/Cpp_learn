#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, const char *argv[])
{
	forward_list<int> fi = {0, 1, 2, 3 , 4, 5, 6, 7, 8, 9};
	auto prev = fi.before_begin();
	auto curr = fi.begin();

	while(curr != fi.end())
	{
		if(*curr % 2)
		{
			curr = fi.insert_after(prev, *curr);
			//advance(curr, 2);
			//advance(prev, 2);
			curr++;
			curr++;
			prev++;
			prev++;
		}
		else
		{
			curr = fi.erase_after(prev);
		}
	}

	for(auto i : fi)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
