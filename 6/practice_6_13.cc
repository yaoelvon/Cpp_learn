//第一函数在调用时，参数是初始化通过将实参拷贝给形参来进行调用，而第二个函数在调用时，使用的是引用，没有拷贝过程，直接对外部的T进行操作
void f(T)
void f(& T)
