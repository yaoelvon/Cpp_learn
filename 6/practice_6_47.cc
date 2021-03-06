//g++ -D NDEBUG practice_6_47.cc -std=c++0x
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int recursive_vector_func(vector<int>::iterator beg, vector<int>::iterator end)
{
	if(beg != end)
	{
#ifndef NDEBUG
		cout << end - beg << endl;;
#endif

		//cout << *beg << endl;
		recursive_vector_func(beg + 1, end);
	}
	return 0;
}

int main(int argc, const char *argv[])
{
	vector<int> vInteger{1, 2, 3, 4, 5, 6, 7, 8};

	recursive_vector_func(vInteger.begin(), vInteger.end());
	
	return 0;
}
