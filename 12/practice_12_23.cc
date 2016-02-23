#include <iostream>
#include <cstring>
#include <new>

using namespace std;

int main(int argc, const char *argv[])
{

	const char *s1 = "hello, ";
	const char *s2 = "bear2flymoon!";
	char *p = new char[sizeof(s1) + sizeof(s2) + 1];
	strcpy(p, s1);
	strcat(p, s2);
	cout << p << endl;

	string st1 = "hello, ";
	string st2 = "bear2flymoon!";
	char *p2 = new char[st1.size() + st2.size() + 1];
	strcpy(p2, (st1 + st2).c_str());
	cout << p2 << endl;

	delete [] p;

	return 0;
}
