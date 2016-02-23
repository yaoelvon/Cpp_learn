#include <iostream>

using namespace std;

int main()
{
	int iVal;

	while(cin >> iVal)
	{
		if(iVal == 42)
			break;
		else
			cout << iVal << endl;
	}
	cout << "you have input 42, over!" << endl;

	return 0;
}
