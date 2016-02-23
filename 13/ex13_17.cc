#include <iostream>

using namespace std;

class numbered
{
	public:
		numbered() { mysn = seq++; }
		int mysn;
		numbered(numbered &n) { mysn = seq++; }

	private:
		static int seq;
};

int numbered::seq = 0;

//void f(numbered s)
void f(const numbered &s)
{
	cout << s.mysn << endl;
}

int main(int argc, const char *argv[])
{
	//定义a时，默认构造函数起作用，定义b和c时，拷贝构造函数起作用
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);

	return 0;
}
