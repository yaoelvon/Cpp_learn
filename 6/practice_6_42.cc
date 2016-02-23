#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word,
								const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main(int argc, const char *argv[])
{
	string suc = "success";
	string fai = "failure";

	cout << make_plural(1, suc, "es") << endl;
	cout << make_plural(2, suc, "es") << endl;
	cout << make_plural(1, fai) << endl;
	cout << make_plural(2, fai) << endl;
	
	return 0;
}
