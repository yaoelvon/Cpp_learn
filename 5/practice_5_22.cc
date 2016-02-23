#include <iostream>

using namespace std;

int get_size()
{
	cout << "func" << endl;
	return 128;
}

int main(int argc, const char *argv[])
{
	do
	{
		int sz = get_size();
		cout << sz << endl;

	}while(sz <= 0);
	
	return 0;
}
