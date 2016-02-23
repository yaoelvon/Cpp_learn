#include <iostream>

using namespace std;
//enter:
//		1 0
//report:
//		libc++abi.dylib: terminating with uncaught exception of type
//		std::runtime_error: i2 must be not 0
//		[1]    26072 abort      ./a.out
int main(int argc, const char *argv[])
{
	int i1, i2;

	cout << "please enter two integer: " << endl;

	while(cin >> i1 >> i2)
	{
		try 
		{
			if(i2 == 0)
			{
				throw runtime_error("i2 must be not 0");
			}

			cout << "i1/i2 = " << i1 / i2 << endl;
		}catch (runtime_error err)
		{
			cout << err.what()
				<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n')
				break;
		}

	}

	return 0;
}
