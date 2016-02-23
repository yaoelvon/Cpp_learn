#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	string numbers("0123456789");
	string st("ab2c3d7R4E6");
	string alph("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string::size_type pos = 0;

	while((pos = st.find_first_not_of(alph, pos)) != string::npos)
	{
		cout << "found number at index: " << pos
			<< " element is " << st[pos] << endl;
		pos++;
	}

	pos = 0;
	while((pos = st.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << "found alph at index: " << pos
			<< " element is " << st[pos] << endl;
		pos++;
	}
	return 0;
}
