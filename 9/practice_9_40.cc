#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<string> svec;
	svec.reserve(1024);
	string word = "test";
	int num = 0;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		svec.push_back(word);
	}
	svec.resize(svec.size() + svec.size() / 2);

	cout << "svec: size: " << svec.size() 
		 << " Capacity: " << svec.capacity() << endl;




	return 0;
}
