#include <iostream>

using namespace std;

//只可以处理c风格的字符串，因为c风格的字符串以空字符结尾，靠空字符来判定字符串结束
void print(const int *cp)
{
	if(cp)	
		while(*cp)
			cout << *cp++;
}

//传递指向数组首元素和尾后元素的指针
void print(const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
}

//显式传递数组的大小
void print(const int ia[], size_t size)
{
	for(size_t i = 0; i< size; i++)
	{
		cout << ia[i] << " ";
	}
	cout << endl;
}

int main(int argc, const char *argv[])
{
	int i = 0, j[2] = {0, 1};

	print(begin(j), end(j));


	print(&i, 1);
	print(j, end(j) - begin(j));
	return 0;
}


