#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	list<int> li = {1, 2, 3, 0, 3, 0, 1, 8, 9, 0, 1};

	auto last_0 = find(li.crbegin(), li.crend(), 0);

	//输出0
	cout << *(last_0) << endl;
	//输出9
	cout << *(++last_0) << endl;
	
	return 0;
}
