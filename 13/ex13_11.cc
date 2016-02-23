#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
	public:
		HasPtr(const string &s = string()) :
			ps(new string(s)), i(0) { }
		//拷贝构造函数
		HasPtr(const HasPtr &);
		//拷贝复制运算符
		HasPtr &operator=(const HasPtr &);
		//析构函数
		~HasPtr() { delete ps; };
	private:
		string *ps;
		int i;
};

HasPtr::HasPtr(const HasPtr &orig) 
{
	ps = new string(*orig.ps);
	i = orig.i;
}

HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
	auto newps = new string(*rhs.ps);
	delete ps;//销毁原string
	ps = newps;//指向新的string
	i = rhs.i;
	return *this;
}

int main(int argc, const char *argv[])
{
	
	return 0;
}

