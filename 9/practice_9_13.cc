#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	list<int> li = {1, 2, 3, 4, 5};

	vector<double> vd(li.cbegin(), li.cend());

	return 0;
}
