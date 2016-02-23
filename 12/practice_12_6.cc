#include <iostream>
#include <vector>

using namespace std;

vector<int> *new_vector(void)
{
	return new (nothrow) vector<int>;
}

void read_ints(vector<int> *pvi)
{
	int i;
	while(cin >> i)
	{
		pvi->push_back(i);
	}
}

void print_ints(vector<int> *pvi)
{
	for(auto i : *pvi)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main(int argc, const char *argv[])
{
	vector<int> *pvi = new_vector();
	if(!pvi)
	{
		cout << "内存不足!" << endl;
	}

	read_ints(pvi);
	print_ints(pvi);

	delete pvi;
	pvi = nullptr;
	
	return 0;
}

