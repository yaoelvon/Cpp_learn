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

		finalgrade = (grade > 90) ? "high pass" 
							   	  : (grade > 75) ? "pass"
								  : (grade >= 60) ? "low pass"
								  : "fail";

		cout << "Your final grade is " << finalgrade << endl;
		cout << "Please input again!" << endl;
	}
	return 0;
}
