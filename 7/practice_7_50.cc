#include <iostream>
#include <string>

using namespace std;

struct Person
{
	friend istream &read(istream &is, Person &item);
	friend ostream &print(ostream &os, const Person &item);

	Person() = default;
	Person(const std::string &s1, const std::string &s2) :
	name(s1), address(s2) { }
	explicit Person(istream &is) { read(is, *this); }

	std::string get_name() const { return name; }
	std::string get_address() const { return address; }
	std::string name;
	std::string address;
};

istream &read(istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}

ostream &print(ostream &os, const Person &item)
{
	os << item.name << " " << item.address;
	return os;
}

int main(int argc, const char *argv[])
{
	Person p("lily", "xupu");

	cout << p.get_name() << " " << p.get_address() << endl;

	return 0;
}
