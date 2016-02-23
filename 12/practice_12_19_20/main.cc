#include "myStrBlob.h"
#include <fstream>

using namespace std;

int main(int argc, const char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "无法打开输入文件" << endl;
		return -1;
	}

	StrBlob b;
	string s;
	while(getline(in, s))
	{
		b.push_back(s);
	}

	//for(StrBlobPtr begin(b.begin()), end(b.end()); begin != end; begin.incr())
	for(StrBlobPtr begin(b.begin()), end(b.end()); neq(begin, end); begin.incr())
	{
		cout << begin.deref() << endl;
	}
	
	return 0;
}
