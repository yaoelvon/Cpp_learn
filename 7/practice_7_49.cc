#include <iostream>

using namespace std;

struct  Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);

	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(n*p) { }

	Sales_data(): Sales_data("", 0, 0) {  };
	Sales_data(const std::string &s): Sales_data(s, 0, 0) { }
	Sales_data(std::istream &is): Sales_data() 
										{ read(is, *this); }
	std::string isbn() const { return bookNo; };
	//Sales_data &combine(const Sales_data &);
	Sales_data &combine(Sales_data &);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data &Sales_data::combine(Sales_data &rhs)
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


int main(int argc, const char *argv[])
{
	string null_book = "9-999-999-9";
	Sales_data s1;

	s1.combine(null_book);

	return 0;
}

//practice_7_49.cc:62:13: error: non-const lvalue reference to type 'Sales_data'
//cannot bind to a value of unrelated type 'string' 
//(aka 'basic_string<char, char_traits<char>, allocator<char> >') 
//s1.combine(null_book);
// 				^~~~~~~~~
//practice_7_49.cc:26:45: note: passing argument to parameter 'rhs' here
//Sales_data &Sales_data::combine(Sales_data &rhs)
