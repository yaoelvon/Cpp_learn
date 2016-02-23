#include <iostream>

using namespace std;

int main()
{
	int ia[10];

	for(int i = 0; i < 10; i++)
	{
		ia[i] = i;
	}

	int ia1[10];

	for(int i = 0; i < 10; i++)
	{
		ia1[i] = ia[i];
	}

	cout << "ia1 array is: " << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << ia1[i] << " ";
	}
	cout << endl;


	return 0;
}
