//error: constructor for 'C' must explicitly initialize the member 'my_mem'
//which does not have a default constructor
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NoDefault {
	public:
		NoDefault(int i): private_i(i) {}
		int private_i;
};

struct C 
{
	//C(int ii) {my_mem.private_i = ii;}
	NoDefault my_mem(10);
};

int main(int argc, const char *argv[])
{
//	vector<NoDefault> vec(10, 1);
	vector<C> vec;
	
	
	return 0;
}
