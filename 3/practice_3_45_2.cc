#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {1, 2, 3, 4,
					5, 6, 7, 8,
					9, 10, 11, 12};

	for(auto i = 0; i < 3; i++)
		for(auto j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
		}
	cout << endl;

	return 0;
}
