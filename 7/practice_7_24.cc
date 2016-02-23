#include <iostream>
#include <string>

using namespace std;

class Screen
{
	public:
		typedef std::string::size_type pos;
		//构造函数
		Screen() = default;//默认
		Screen(pos ht, pos wd) : height(ht), width(wd),
		contents(ht * wd, " ") {}
		Screen(pos ht, pos wd, char c) : height(ht), width(wd),
		contents(ht * wd, c) {}

		char get() const
		{ return contens[cursor];};
		inline char get(pos ht, pos wd) const;
		Screen &move(pos r, pos c);
	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
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
