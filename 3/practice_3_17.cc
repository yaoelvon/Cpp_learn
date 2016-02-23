/* get a serial of word and save into a vector object, then set them in big
 * letters*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vString;
	string s;
	char cont = 'y';

	cout << "please input the first word: " << endl;
	while(cin >> s)
	{
		vString.push_back(s);
		cout << "continue?(y or n)" << endl;
		cin >> cont;
		if(cont != 'y' && cont != 'Y')
			break;
		cout << "please input the next word: " << endl;
	}

	cout << "switch output is: " << endl;
	for(auto &mem : vString)
	{
		for(auto &c : mem)
		{
			c = toupper(c);
		}
		cout << mem << endl;
	}

	return 0;
}


