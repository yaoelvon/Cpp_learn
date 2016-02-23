#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	cout << "Please input a serial of numbers: " << endl;
	istream_iterator<int> in_iter(cin), eof;	
	vector<int> vi;

	//程序一运行，就会跳过这段
	while(in_iter != eof)
	{
		vi.push_back(*in_iter++);
	}

	sort(vi.begin(), vi.end());

	ostream_iterator<int> out_iter(cout, ",");

	unique_copy(vi.begin(), vi.end(), out_iter);

	cout << endl;

	return 0;
}
