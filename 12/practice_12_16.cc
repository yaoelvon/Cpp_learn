#include <iostream>
#include <memory>

using namespace std;

int main(int argc, const char *argv[])
{
	unique_ptr<string> p1(new string("bear2flymoon")); 
	unique_ptr<string> p2(p1);
	unique_ptr<string> p3;
	p3 = p2;

	return 0;
}

//错误信息，大致意思为私有的值无法拷贝或赋值
/*
practice_12_16.cc:9:21: error: calling a private constructor of class 'std::__1::unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > >'
unique_ptr<string> p2(p1);
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory:2469:5: note: declared private here
unique_ptr(unique_ptr&);
^
practice_12_16.cc:11:5: error: 'operator=' is a private member of 'std::__1::unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > >'
p3 = p2;
~~ ^ ~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/memory:2472:17: note: declared private here
unique_ptr& operator=(unique_ptr&);
^
2 errors generated.
*/
