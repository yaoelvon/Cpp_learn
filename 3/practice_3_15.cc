#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vStr;	//type is vector object of string
	string st;				//record user's input string
	char tmp;				//interacting with users

	while(cin >> st)
	{
		vStr.push_back(st);//add elements to the vector
		cout << "if you want continue, please input 'y', else input 'n':" << endl;
		cin >> tmp;
		if(tmp != 'y')
		{
			break;
		}
	}

	for(auto mem : vStr)	//output every elements
	{
		cout << mem << " ";
	}
	cout << endl;

	return 0;
}
