int *ptr;
vector<int> vec;
int ival;

(a)ptr != 0 && *ptr++
	ptr为非空指针 并且 ptr指向的值非0
(b)ival++ && ival
	ival和ival都不是0
	表达式不正确，修改为：(ival + 1) && ival
(c)vec[ival++] <= vec[ival]
	vec的同一个元素进行比较
	表达式不正确，修改为vec[ival+1] <= vec[ival]
