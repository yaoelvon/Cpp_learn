#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[])
{
	ifstream in("./infile.txt");
	istream_iterator<string> str_it(in), eof;
	vector<string> vStr;

	copy(str_it, eof, back_inserter(vStr));

	for(auto &s : vStr)
	{
		cout << s << " ";
	}
	cout << endl;


	return 0;
}
