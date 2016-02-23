#include <iostream>

using namespace std;

struct  Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);


	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(std::istream &);

	std::string isbn() const { return bookNo; };
	Sales_data &combine(const Sales_data &);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

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
#if 0
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
#endif
	Sales_data sd1("hello");
	cout << sd1.isbn() << endl;
	Sales_data sd2("world", 1, 1);
	cout << sd2.isbn() << " " << sd2.units_sold << " " << sd2.revenue << endl;
	Sales_data sd3(cin);
	cout << sd3.isbn() << " " << sd3.units_sold << " " << sd3.revenue << endl;



	return 0;
}

