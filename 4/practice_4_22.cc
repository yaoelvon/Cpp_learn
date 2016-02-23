#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	int grade = 0;
	string finalgrade;

	//条件运算符
	/*
	while(1)
	{
		cout << "please input your grade: " << endl;
		cin >> grade;
		finalgrade = (grade > 90) ? "high pass" 
								  : (grade > 75) ? "pass"
								  : (grade >= 60) ? "low pass"
								  : "fail";
		cout << finalgrade << endl;
	}
	*/

	//if
	while(1)
	{
		cout << "please input your grade: " << endl;
		cin >> grade;
		if(grade > 90)
			finalgrade = "high pass";
		else if(grade > 75)
			finalgrade = "pass";
		else if(grade >= 60)
			finalgrade = "low pass";
		else
			finalgrade = "fail";

		cout << finalgrade << endl;

	}

	return 0;
}
