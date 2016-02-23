#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(auto iter = vi.cend() - 1; iter != vi.cbegin(); --iter)
	{
		cout << *iter << " ";
	}
	cout << *(vi.cbegin()) << endl;;

	return 0;
}
