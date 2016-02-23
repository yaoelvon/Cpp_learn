#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, const char *argv[])
{
	forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	auto prev = flst.before_begin();//首前元素
	auto curr = flst.begin();//第一个元素

	while(curr != flst.end())
	{
		if(*curr % 2)
		{
			curr = flst.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	for(auto i : flst)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
