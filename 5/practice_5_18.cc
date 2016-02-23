#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int v1, v2;

	do
	{
		cout << "please enter two numbers to sum: " << endl;
		if(cin >> v1 >> v2)
			cout << "v1 + v2 = " << v1 + v2 << endl;
	}while(cin);

	return 0;
}
