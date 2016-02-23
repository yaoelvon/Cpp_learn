#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int string_read()
{
	ifstream input("./practice8_10_ifile.txt");	
	string line, word;
	vector<string> vString;

	while(getline(input, line))
	{
		vString.push_back(line);
	}

	for(auto s : vString)
	{
		istringstream record(s);
		while(record >> word)
		{
			cout << word << " ";
		}
		cout << endl;
	}

	return 0;
}

int main(int argc, const char *argv[])
{
	string_read();
	return 0;
}
