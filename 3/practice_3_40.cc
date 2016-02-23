#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char ca1[] = "hello ";
	char ca2[] = "world!";
	char ca3[strlen(ca1) + strlen(ca2) + 1];

	strcpy(ca3, ca1);
	strcat(ca3, ca2);

	cout << ca3 << endl;

	return 0;
}
