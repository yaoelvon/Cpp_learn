#include <iostream>
#include <sstream>

using namespace std;

istream &stream_read(istream &is)
{
	string line, word;

	is.clear();
	while(getline(is, line))
	{
		istringstream record(line);
		while(record >> word)
			cout << word << " ";
	}
	cout << endl;
	
	is.clear();

	return is;
}

int main(int argc, const char *argv[])
{
	istream &is = stream_read(cin);

	return 0;
}
