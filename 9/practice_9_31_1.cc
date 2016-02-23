//对于list，不能使用+=
#include <iostream>
#include <list>

using namespace std;

int main(int argc, const char *argv[])
{
	list<int> vi = {0, 1, 2, 3 , 4, 5, 6, 7, 8, 9};
	auto iter = vi.begin();
	while(iter != vi.begin())
	{
		if(*iter % 2)
		{
			iter = vi.insert(iter, *iter);
		//	iter += 2;
			iter++;
			iter++;
			//或  advance(iter, 2);
		}
		else
			iter = vi.erase(iter);
	}

	for(auto i : vi)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
