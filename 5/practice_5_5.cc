#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	int grade;
	string finalgrade;

	cout << "Please input a grade[0-100]: " << endl;
	while(cin >> grade)
	{
		if(grade > 100)
		{
			cout << "This is not a correctly grade! Please input again!" << endl;
			continue;
		}

		if(grade > 90)
			finalgrade = "high pass";
		else if(grade > 75)
			finalgrade = "pass";
		else if(grade >= 60)
			finalgrade = "low pass";
		else
			finalgrade = "fail";

		cout << "Your final grade is " << finalgrade << endl;
		cout << "Please input again!" << endl;
	}
	return 0;
}
