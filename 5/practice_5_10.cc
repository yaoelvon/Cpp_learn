#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	string s;
	int count = 0;

	cout << "Please input a serial of string!" << endl;
	getline(cin, s);

	for(auto c : s)
	{
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
				|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			count++;
	}
	cout << "In the string, there are " << count << " yuanyin!" << endl;

	return 0;
}

