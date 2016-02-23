#include <iostream>
#include <memory>

using namespace std;

struct destination {};
struct connection {};

connection connect(destination *pd)
{
	cout << "打开连接" << endl;
	return connection();
}

void disconnect(connection c)
{
	cout << "关闭连接" << endl;
}

void f(destination &d)
{
	cout << "直接管理connect" << endl;
	connection c = connect(&d);
	//忘记调用disconnect关闭连接
	
	cout << endl;
}


void f1(destination &d)
{
	cout << "用shared_ptr管理connect" << endl;

	connection c = connect(&d);
	shared_ptr<connection> p(&c, [](connection *p) { disconnect(*p); });

	//忘记调用disconnect关闭连接
	
	cout << endl;

}

int main(int argc, const char *argv[])
{
	destination d;
	f(d);
	f1(d);

	return 0;
}
