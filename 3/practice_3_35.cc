#include <iostream>

using namespace std;

int main()
{
	int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int *p = ia;

	cout << "before:" << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << ia[i] << " ";
	}
	cout << endl;

	/*
	for(int i = 0; i < 10; i++)
	{
		*p++ = 0;
	}
	*/
	//C++11引入了begin和end函数，可以方便的定位到数组的边界
	int *p = begin(ia);
	while(p != end(ia))
	{
		*p = 0;
		p++;
	}

	cout << "after:" << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << ia[i] << " ";
	}
	cout << endl;

	return 0;
}
