#include <iostream>
#include <vector>

using namespace std;

bool in_vector_search_int(vector<int> &vInteger, int i)
{
	auto begin = vInteger.begin();
	auto end = vInteger.end();

	if(begin == end)
	{
		cout << "vInteger is null" << endl;
		return false;
	}

	while(begin != end)
	{
		if(*begin != i)
		{
			++begin;
		}
		else
		{
			cout << "find i" << endl;
			return true;
		}
	}

	return false;
}

int main(int argc, const char *argv[])
{
	vector<int> vInteger{1, 2, 3};
	bool b = false;

	b = in_vector_search_int(vInteger, 2);
	if(b == true)
	{
		cout << "search success" << endl;
	}
	return 0;
}
