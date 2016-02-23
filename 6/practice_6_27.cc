#include <iostream>

using namespace std;

int calc_sum(initializer_list<int> li)
{
	int sum = 0;

	for(const auto i : li)
	{
		sum += i;
	}

	return sum;
}

int main(int argc, const char *argv[])
{
	int sum_main = 0;
	sum_main = calc_sum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
	cout << sum_main << endl;

	return 0;
}
