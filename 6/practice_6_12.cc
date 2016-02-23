//使用引用更好，指针较难理解，且容易出错，引用更安全 

#include <iostream>

using namespace std;

int jiaohuan(int &ip1, int &ip2)
{
	int tmp = 0;
	tmp = ip1;
	ip1 = ip2;
	ip2 = tmp;

	return 0;
}

int main(int argc, const char *argv[])
{
	int i1 = 0;
	int i2 = 1;

	jiaohuan(i1, i2);

	cout << i1 << " " << i2 << endl;
	
	return 0;
}
