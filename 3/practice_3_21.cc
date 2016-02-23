#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1's numbers of elements is:" << v1.size() << endl;
	if(v1.cbegin() != v1.cend())
	{
		cout << "v1's elements is: " << endl;
		for(auto it = v1.cbegin(); it != v1.end(); it++)
			cout << *it << " ";
		cout << endl;
	}
	cout << "v1's numbers of elements is:" << v1.size() << endl;
	if(v1.cbegin() != v1.cend())
	{
		cout << "v1's elements is: " << endl;
		for(auto it = v1.cbegin(); it != v1.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v2's numbers of elements is:" << v2.size() << endl;
	if(v2.cbegin() != v2.cend())
	{
		cout << "v2's elements is: " << endl;
		for(auto it = v2.cbegin(); it != v2.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v3's numbers of elements is:" << v3.size() << endl;
	if(v3.cbegin() != v3.cend())
	{
		cout << "v3's elements is: " << endl;
		for(auto it = v3.cbegin(); it != v3.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v4's numbers of elements is:" << v4.size() << endl;
	if(v4.cbegin() != v4.cend())
	{
		cout << "v4's elements is: " << endl;
		for(auto it = v4.cbegin(); it != v4.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v5's numbers of elements is:" << v5.size() << endl;
	if(v5.cbegin() != v5.cend())
	{
		cout << "v5's elements is: " << endl;
		for(auto it = v5.cbegin(); it != v5.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v6's numbers of elements is:" << v6.size() << endl;
	if(v6.cbegin() != v6.cend())
	{
		cout << "v6's elements is: " << endl;
		for(auto it = v6.cbegin(); it != v6.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v7's numbers of elements is:" << v7.size() << endl;
	if(v7.cbegin() != v7.cend())
	{
		cout << "v7's elements is: " << endl;
		for(auto it = v7.cbegin(); it != v7.end(); it++)
			cout << *it << " ";
		cout << endl;
	}







	return 0;
}

