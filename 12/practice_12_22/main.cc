#include <iostream>
#include "./myStrBlob.h"

using namespace std;

int main(int argc, const char *argv[])
{
	const StrBlob b = {"hello", "bear2flymoon", "!"};

	for(auto it = b.begin(); neq(it, b.end()); it.incr())
		cout << it.deref() << endl;
	return 0;
}
