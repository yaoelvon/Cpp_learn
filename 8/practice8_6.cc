//还有两个辅助文件在相同目录下
#include <iostream>
#include <fstream>

using namespace std;

struct  Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(std::istream &is) { read(is, *this); }

	std::string isbn() const { return bookNo; };
	Sales_data &combine(const Sales_data &);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if(units_sold)
		return revenue / units_sold;
	else
		return 0;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}


int main(int argc, const char *argv[])
{
	ifstream input(argv[1]);
	ofstream output(argv[2]);

	Sales_data total;

	if(read(input, total))
	{
		Sales_data trans;

		while(read(input, trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(output, total) << endl;
				total = trans;
			}
		}

		print(output, total) << endl;
	}
	else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
}

