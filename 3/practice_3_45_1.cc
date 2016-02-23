#include <iostream>

/* 使用范围for语句管理迭代器，可能不对 */

using namespace std;

int main()
{
	int ia[3][4] = {1, 2, 3, 4, 
					5, 6, 7, 8, 
					9, 10, 11, 12};

	for(auto &p : ia)
	{
		for(auto q : p)
			cout << q << " ";
	}
	cout << endl;
	
	return 0;
}
