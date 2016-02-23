#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> new_vector(void)
{
	return make_shared<vector<int>>();
}

void read_ints(shared_ptr<vector<int>> svi)
{
	int i;
	while(cin >> i)
	{
		svi->push_back(i);
	}
}

void print_ints(shared_ptr<vector<int>> svi)
{
	for(auto beg = svi->begin(); beg != svi->end(); beg++)
	{
		cout << *beg << " ";
	}
	cout << endl;
}

int main(int argc, const char *argv[])
{
	shared_ptr<vector<int>> svi = new_vector();

	read_ints(svi);

	print_ints(svi);

	return 0;
}
