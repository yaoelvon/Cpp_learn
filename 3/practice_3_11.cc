/* practice 3.11 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string s = "Keep out!";
	
	/* c's type is const char &, you can't change it */
	for(auto &c : s)
	{
		cout << c << endl;/* success */
		//c = 'x';/* error */
	}

	return 0;
}
