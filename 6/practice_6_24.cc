#include <iostream>

using namespace std;

void print(const int ia[10])	//参数存在问题，这里的参数只指代传入的时const int *型，于预期不符合，改成const int (&ia)[10]
{
	for(size_t i = 0; i != 10; ++i)
	{
		cout << ia[i] << endl;
	}
}

int main(int argc, const char *argv[])
{
	const int arr[5] = {1, 2, 3, 4, 5};
	print(arr);
	return 0;
}
