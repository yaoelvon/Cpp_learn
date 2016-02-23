#include <iostream>
#include <string>

using namespace std;

class Employee
{
	public:
		//默认构造函数
		Employee() { my_e_num = e_num++; } 
	    Employee(const string &name) { e_name = name; my_e_num = e_num++; }
		//拷贝构造函数
		Employee(Employee &e) { e_name = e.e_name; my_e_num = e_num++; }
		//拷贝赋值运算符
		Employee &operator=(Employee &rhs) { e_name = rhs.e_name; return *this; }
		int get_e_num() { return my_e_num; }
		const string &get_e_name() { return e_name; }
	private:
		string e_name;
		int my_e_num;
		static int e_num;
};

int Employee::e_num = 0;

void f(Employee &s)
{
	cout << s.get_e_name() << " : " << s.get_e_num() << endl;
}

int main(int argc, const char *argv[])
{
	Employee a("jake"), b = a, c;
	c = b;
	f(a);
	f(b);
	f(c);

	return 0;
}
