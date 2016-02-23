//string容器的功能跟vector相同
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<char> vec{'b', 'e', 'a', 'r', '2'};
	string str(vec.begin(), vec.end());

	cout << str << endl;
	
	return 0;
}
