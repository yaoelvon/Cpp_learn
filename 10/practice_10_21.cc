#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	int v1 = 0;		
	cout << "please input a integer: " << endl;

	cin >> v1;

	auto f = [v1]() mutable -> bool 
	{ if(v1 > 0) { v1--; return false; } else return true;  };

	int i;
	do
	{
		i = f();
		cout << i << endl;
	}while(i != 1);

	return 0;
}
