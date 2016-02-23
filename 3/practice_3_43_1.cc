#include <iostream>

/* 使用范围for语句管理迭代器，可能不对 */

using namespace std;

int main()
{
	int ia[3][4] = {1, 2, 3, 4, 
					5, 6, 7, 8, 
					9, 10, 11, 12};

	//数组的引用，数组是不能直接赋值的，所以这里对ia中各个数组进行引用
	for(const int (&row)[4] : ia)
	{
		for(int col : row)
		{
			cout << col << " ";
		}
	}
	cout << endl;
	
	return 0;
}
