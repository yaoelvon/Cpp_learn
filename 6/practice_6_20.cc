//说明时候应该用常量引用？
//不需要更改，参数可能传入常量时
//
//如果参数应该是常量引用，但是我们却使用普通引用，则可能导致：
//1. 常量传入参数时报错
//2. 函数不明确
//3. 可能在函数中被修改