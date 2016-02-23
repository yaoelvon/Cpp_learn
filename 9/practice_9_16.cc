//报错：practice_9_16.cc:12:9: error: invalid operands to binary expression
//('vector<int>' and 'list<int>')
//因为想要直接用＝＝进行比较，需要容器类型相同且元素类型相同
//如果一定要进行比较只能通过一个个元素取出来一个个进行比较
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> vi1 = {1, 2, 3};
	list<int> vi2 = {1, 2, 3};

	if(vi1 == vi2)
	{
		cout<< "equal" << endl;
	}

	return 0;
}
