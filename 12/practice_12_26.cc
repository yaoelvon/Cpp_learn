#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main(int argc, const char *argv[])
{
	allocator<string> alloc;
	//申请内存
	auto const p = alloc.allocate(100);
	string s;
	auto q = p;
	while(cin >> s && q != p + 100)
	{
		//在申请的内存中构建信息
		alloc.construct(q++, s);
	}

	while(q != p)
	{
		cout << *q << " ";
		//执行对象的析构函数
		alloc.destroy(--q);
	}
	cout << *q << endl;

	//释放内存
	alloc.deallocate(p, 100);

	return 0;
}
