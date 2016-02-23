#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	int buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};

	fill_n(begin(buf), 10, 0);

	for(int i = 0; i < 10; ++i)
	{
		cout << buf[i] << " ";
	}
	cout << endl;

	return 0;
}
