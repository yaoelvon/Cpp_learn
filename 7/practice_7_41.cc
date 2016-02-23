
#include <iostream>

using namespace std;

struct  Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(n*p) { cout << "1" << endl; }

	//当使用默认构造函数，先调用Sales_data("", 0, 0),然后调用Sales_data()
	Sales_data(): Sales_data("", 0, 0) { cout << "2" << endl; };
	//先调用Sales_data(s, 0, 0),然后调用自己
	Sales_data(const std::string &s): Sales_data(s, 0, 0) { cout << "3" << endl; }
	//先1，后2，最后4
	Sales_data(std::istream &is): Sales_data() 
										{ read(is, *this); cout << "4" << endl; }
	//here
//	Sales_data() {units_sold = 0; revenue = 0.0}

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
	Sales_data s1;
	Sales_data s2("haha");
	Sales_data s3("hehe", 1, 2);
	Sales_data total(cin);

	return 0;
}
