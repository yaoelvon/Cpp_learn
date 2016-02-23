#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	if(argc < 5)
	{
		cout << "args is less" << endl;
		return -1;
	}

	cout << "argv[0] " << "\"" << argv[0] << "\"" << endl;
	cout << "argv[1] " << "\"" << argv[1] << "\"" << endl;
	cout << "argv[2] " << "\"" << argv[2] << "\"" << endl;
	cout << "argv[3] " << "\"" << argv[3] << "\"" << endl;
	cout << "argv[4] " << "\"" << argv[4] << "\"" << endl;
	cout << "argv[5] " << "\"" << argv[5] << "\"" << endl;
	cout << "argv[1] " << argv[1] << endl;
	cout << "argv[2] " << argv[2] << endl;
	cout << "argv[3] " << argv[3] << endl;
	cout << "argv[4] " << argv[4] << endl;
	cout << "argv[5] " << argv[5] << endl;
	return 0;
}
