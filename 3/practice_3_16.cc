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
	if(v1.size() > 0)
	{
		cout << "v1's elements is: " << endl;
		for(auto e : v1)
			cout << e << " ";
		cout << endl;
	}

	cout << "v2's numbers of elements is:" << v2.size() << endl;
	if(v2.size() > 0)
	{
		cout << "v2's elements is: " << endl;
		for(auto e : v2)
			cout << e << " ";
		cout << endl;
	}
	cout << "v3's numbers of elements is:" << v3.size() << endl;
	if(v3.size() > 0)
	{
		cout << "v3's elements is: " << endl;
		for(auto e : v3)
			cout << e << " ";
		cout << endl;
	}
	cout << "v4's numbers of elements is:" << v4.size() << endl;
	if(v4.size() > 0)
	{
		cout << "v4's elements is: " << endl;
		for(auto e : v4)
			cout << e << " ";
		cout << endl;
	}
	cout << "v5's numbers of elements is:" << v5.size() << endl;
	if(v5.size() > 0)
	{
		cout << "v5's elements is: " << endl;
		for(auto e : v5)
			cout << e << " ";
		cout << endl;
	}
	cout << "v6's numbers of elements is:" << v6.size() << endl;
	if(v6.size() > 0)
	{
		cout << "v6's elements is: " << endl;
		for(auto e : v6)
			cout << e << " ";
		cout << endl;
	}
	cout << "v7's numbers of elements is:" << v7.size() << endl;
	if(v7.size() > 0)
	{
		cout << "v7's elements is: " << endl;
		for(auto e : v7)
			cout << e << " ";
		cout << endl;
	}
	return 0;
}

