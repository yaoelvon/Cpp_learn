#include <iostream>
#include <map>
#include <string>

using namespace std;

void remove_auther(multimap<string, string> &books, const string &auther)
{
	auto pos = books.equal_range(auther);
	if(pos.first == pos.second)
	{
		cout << "没有" << auther << " 这个作者" << endl;
	}
	else
	{
		books.erase(pos.first, pos.second);
	}
}

void print_books(multimap<string, string> &books)
{
	cout << "当前书目包括: " << endl;
	for(auto &book : books)
	{
		cout << book.first << ", 《" << book.second << "》" << endl;
	}
	cout << endl;
}

int main(int argc, const char *argv[])
{
	multimap<string, string> books;
	books.insert({"Barth, John", "Sot-Weed Factor"});
	books.insert({"Barth, John", "Lost in the Funhouse"});
	books.insert({"金庸", "射雕英雄传"});
	books.insert({"金庸", "天龙八部"});

	print_books(books);
	remove_auther(books, "张三");
	remove_auther(books, "Barth, John");
	print_books(books);
	
	return 0;
}
