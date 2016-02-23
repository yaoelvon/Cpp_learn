bool is_empty(string &s)
{
	return s.empty();
}

//上述函数的局限性在于：
//1. 当传入的s是常量字符串时，会报错
//2. 函数不会修改s，但是并没有明确的加上const来说显式说明

修改：
在string前加上const

