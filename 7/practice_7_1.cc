#include <iostream>

using namespace std;

struct  Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main(int argc, const char *argv[])
{
	Sales_data total;

	if(read(cin, total))
	{
		Sales_data trans;
		while(read(cin, trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
}
