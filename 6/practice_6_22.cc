#include <iostream>

using namespace std;

int switch_p1_p2(int **p1, int **p2)
{
	int **p3;
	*p3 = *p1;
	*p1 = *p2;
	*p2 = *p3; 

	return 0;
}

int main(int argc, const char *argv[])
{
	int i1 = 1;
	int i2 = 2;
	int *p1 = &i1;
	int *p2 = &i2;

	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;

	switch_p1_p2(&p1, &p2);

	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;

	return 0;
}
