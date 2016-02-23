#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	int num;
	vector<int> vInt;
	cout << "Please input a serial numbers: " << endl;
	while(cin >> num)
	{
		vInt.push_back(num);
	}

	cout << "Now, input a number to calc its show times!" << endl;
	num = 11;
	auto result = count(vInt.begin(), vInt.end(), num);
	
	cout << "show times: " << result << endl;


	return 0;
}
