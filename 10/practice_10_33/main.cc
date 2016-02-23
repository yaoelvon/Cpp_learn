#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	if(argc < 4)
	{
		cerr << "argc is less 4!" << endl;
		return -1;
	}

	ifstream in(argv[1]);
	ofstream out_odd(argv[2]);
	ofstream out_even(argv[3]);

	istream_iterator<int> int_it(in), eof;
	ostream_iterator<int> out_odd_iter(out_odd, " ");
	ostream_iterator<int> out_even_iter(out_even, "\n");
	vector<int> vi;

	while(int_it != eof)
	{
		vi.push_back(*int_it++);
	}

	for(auto i : vi)
	{
		if(i % 2)
		{
			*out_odd_iter++ = i;
		}
		else
		{
			*out_even_iter++ = i;
		}
	}

	return 0;
}
