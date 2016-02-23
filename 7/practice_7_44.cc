#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NoDefault {
	public:
		NoDefault(int i): private_i(i) {};
	private:
		int private_i;
};

struct C 
{
	C(NoDefault ndf): my_mem(ndf) {};
	NoDefault my_mem;
};

int main(int argc, const char *argv[])
{
	vector<NoDefault> vec(10, 1);
	
	return 0;
}
