#include <iostream>
#include <vector>
#include <string>

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
	
	return 0;
}
