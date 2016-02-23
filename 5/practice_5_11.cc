#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	string s;
	int aCount = 0;
	int kCount = 0;
	int tCount = 0;
	int eCount = 0;

	cout << "Please input a serial of string!" << endl;
	getline(cin, s);

	for(auto c : s)
	{
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
				|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			aCount++;
		if(c == ' ')
			kCount++;
		if(c == '\t')
			tCount++;
		if(c == 10)
			eCount++;
	}
	cout << "In the string, there are " << aCount << " yuanyin!" << endl;
	cout << "kongge " << kCount << endl;
	cout << "zhibiaofu " << tCount << endl;
	cout << "huiche " << eCount << endl;

	return 0;
}

