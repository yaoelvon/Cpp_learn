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
	private:
		string *ps;
		int i;
};

HasPtr::HasPtr(const HasPtr &orig) 
{
	ps = new string(*orig.ps);
	i = orig.i;
}

int main(int argc, const char *argv[])
{
	
	return 0;
}

