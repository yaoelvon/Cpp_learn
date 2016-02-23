#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string ifile;

int read(vector<string> &vString)
{
	string st;


	ifstream input(ifile);
	while(getline(input, st))
	{
		vString.push_back(st);
	}

	return 0;
}

int main(int argc, const char *argv[])
{
	if(argc < 2)
	{
		cout << "argc < 2" << endl;
	}
	
	ifile = argv[1];

	vector<string> vString;

	read(vString);

	for(auto s : vString)
	{
		cout << s << endl;;
	}

	return 0;
}
