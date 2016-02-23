#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator in_vector_search_int(vector<int> &vInteger, int i)
{
	auto begin = vInteger.begin();
	auto end = vInteger.end();

	if(begin == end)
	{
		cout << "vInteger is null" << endl;
		return end;
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
			return begin;
		}
	}

	cout << "can not find" << endl;
	return end;
}

int main(int argc, const char *argv[])
{
	vector<int> vInteger{1, 2, 3};

	in_vector_search_int(vInteger, 2);

	return 0;
}
