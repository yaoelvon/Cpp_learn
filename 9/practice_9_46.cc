#include <iostream>
#include <string>
#include <iterator>

using namespace std;

string &func(string &str_name, string const &prev_name, string const &end_name)
{
	int pos = 0;
	str_name.insert(pos, prev_name);
	pos = str_name.size();
	str_name.insert(pos, end_name);

	return str_name;
}

int main(int argc, const char *argv[])
{
	string name = {"hellen"};

	cout << func(name, "Ms.", "Jr.") << endl;

	return 0;
}
	
