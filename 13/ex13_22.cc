#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
	public:
		//默认构造函数
		HasPtr(const string &s = string()) :
			ps(new string(s)), i(0) { }
		//拷贝构造函数
		HasPtr(const HasPtr &p) :
			ps(new string(*p.ps)), i(p.i) { }
		//拷贝赋值运算符
		HasPtr &operator=(const HasPtr &);
		//赋予新string
		HasPtr &operator=(const string &);
		//解引用
		string &operator*();
		//析构函数
		~HasPtr() { delete ps; };
	private:
		string *ps;
		int i;
};

HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
	auto newps = new string(*rhs.ps);
	delete ps;//销毁原string
	ps = newps;//指向新的string
	i = rhs.i;
	return *this;
}

HasPtr &HasPtr::operator=(const string &rhs)
{
	*ps = rhs;
	return *this;
}

string &HasPtr::operator*()
{
	return *ps;
}

int main(int argc, const char *argv[])
{
	HasPtr h("hi mom!");//默认构造函数
	//拷贝构造函数
	HasPtr h2(h); //行为类值，h2、h3和h指向不同的string
	//赋值构造运算符
	HasPtr h3 = h;
	h2 = "hi dad!";
	h3 = "hi son!";
	cout << "h: " << *h << endl;
	cout << "h2: " << *h2 << endl;
	cout << "h3: " << *h3 << endl;
	
	return 0;
}

