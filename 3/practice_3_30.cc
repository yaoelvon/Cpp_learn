constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
	ia[ix] = ix;
//1. 数组编号以0开头，出错
//2. 以1开头存储，最后一位array_size越界了
