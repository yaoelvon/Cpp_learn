#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	if(argc < 3)
	{
		cout << "arg is less" << endl;
		return -1;
	}

	string s;
	s += argv[1];
	s += argv[2];

	cout << s << endl;

	return 0;
}
