//注意：首先定义Window_mgr类，然后定义Screen类，最后定义clear()函数
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Window_mgr
{
	public:
		void clear();
};

class Screen
{
	friend void Window_mgr::clear();
	public:
		typedef std::string::size_type pos;
		//构造函数
		Screen() = default;//默认
		Screen(pos ht, pos wd) : height(ht), width(wd),
		contents(ht * wd, ' ') {}
		Screen(pos ht, pos wd, char c) : height(ht), width(wd),
		contents(ht * wd, c) {}

		char get() const
		{ return contents[cursor];};
		inline char get(pos ht, pos wd) const;
		Screen &move(pos r, pos c);

		Screen &set(char);
		Screen &set(pos, pos, char);

		Screen &display(std::ostream &os)
		{ do_display(os); return *this; }
		const Screen &display(std::ostream &os) const
		{ do_display(os); return *this; }
		
		//typedef std::string::size_type pos;
	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
		void do_display(std::ostream &os) const {os << contents;}
};




inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}
void Window_mgr::clear()
{
	Screen myScreen(10, 20, 'X');
	cout << "清理之前myScreen的内容是：" << endl;
	cout << myScreen.contents << endl;
	myScreen.contents = "";
	cout << "清理之后myScreen的内容是：" << endl;
	cout << myScreen.contents << endl;
}


int main(int argc, const char *argv[])
{
	Window_mgr w;
	w.clear();

	return 0;
}
