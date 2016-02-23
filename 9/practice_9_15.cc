#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vi1 = {1, 2, 3};
	vector<int> vi2 = {1, 2, 3};

	if(vi1 == vi2)
	{
		cout<< "equal" << endl;
	}
	return 0;
}
