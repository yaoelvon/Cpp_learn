#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
	string str;
	//至少需要100个，那就分配150个，保证不需要重新分配内存
	str.reserve(150);
	return 0;
}
