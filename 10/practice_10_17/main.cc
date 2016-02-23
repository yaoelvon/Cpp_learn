#include "Sales_data.h"
#include <iostream>
#include <vector>

using namespace std;

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
	return sd1.isbn() < sd2.isbn();
}


int main(int argc, const char *argv[])
{
	vector<Sales_data> vSd;
	Sales_data sd_tmp;

	cout << "Please input a serial Sales_data: " << endl;
	while(read(cin, sd_tmp))
	{
		vSd.push_back(sd_tmp);
	}

	cout << "isbn: " << endl;
	for(const auto &sd : vSd)
	{
		cout << sd.isbn() << " ";
	}
	cout << endl;

	sort(vSd.begin(), vSd.end(), [](const Sales_data &sd1, const Sales_data &sd2)
			{ return sd1.isbn() < sd2.isbn(); });

	cout << "isbn: " << endl;
	for(const auto &sd : vSd)
	{
		cout << sd.isbn() << " ";
	}
	cout << endl;

	return 0;
}
