#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main(int argc, const char *argv[])
{
	string s1 = "hello";
	string s2 = "hello world";

	cout << isShorter(s1, s2) << endl;

	return 0;
}
