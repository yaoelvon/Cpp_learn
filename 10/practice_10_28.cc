#include <iostream>
#include <vector>
#include <iterator>
#include <list>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vInteger = {1, 2, 3, 4, 5, 6, 7, 8, 9};	

	list<int> vi1, vi2, vi3;

	copy(vInteger.begin(), vInteger.end(), inserter(vi1, vi1.begin()));
	copy(vInteger.begin(), vInteger.end(), back_inserter(vi2));
	copy(vInteger.begin(), vInteger.end(), front_inserter(vi3));

	for_each(vi1.begin(), vi1.end(), [](int i){ cout << i << " "; });
	cout << endl;
	for_each(vi2.begin(), vi2.end(), [](int i){ cout << i << " "; });
	cout << endl;
	for_each(vi3.begin(), vi3.end(), [](int i){ cout << i << " "; });
	cout << endl;

	return 0;
}
