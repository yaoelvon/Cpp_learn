somevalue ? ++x, ++y : --x, --y
由于条件运算符的优先级高于逗号运算符，所以上述语句实际是：
(somevalue ? ++x, ++y : --x), --y
