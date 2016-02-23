#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(auto iter = vi.crbegin(); iter != vi.crend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
