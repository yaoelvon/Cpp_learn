#include <iostream>

using namespace std;

istream &stream_read(istream &is)
{
	string st;

	auto old_state = is.rdstate();
	cout << old_state << endl;
	is.clear();
	while(is >> st)
	{
		cout << st << endl;;
	}
	
	is.clear();
	//置位，无法将已经置位的位置为0
	is.setstate(old_state);

	return is;
}

int main(int argc, const char *argv[])
{
	istream &is = stream_read(cin);

	return 0;
}
