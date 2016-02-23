#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char *argv[])
{
	char *p = new char[20];
	int l = 0;
	char c;

	while(cin.get(c))
	{
		if(isspace(c))
			break;
		p[l++] = c;
		if(l == 20)
		{
			cout << "达到容量上线" << endl;
			break;
		}
	}

	p[l] = '\0';
	cout << p << endl;

	delete [] p;

	return 0;
}
