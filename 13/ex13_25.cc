//由于希望StrBlob的行为像值一样，因此在拷贝构造函数和拷贝赋值运算符中，我们
//应该将其数据－string的vector拷贝一份，使得两个StrBlob对象指向各自的数据，而不是
//简单拷贝shared_ptr使得两个StrBlob指向同一个vector。
//StrBlob不需要析构函数的原因时，它管理的全部资源就是string的vector，而这是由
//shared_ptr负责管理的。当一个StrBlob对象销毁时，会调用shared_ptr的析构函数，
//它会正确调整引用计数，当需要时（引用计数为0）释放vector。即，shared_ptr保证
//了资源分配、释放的正确性，StrBlob就不必进行相应的处理了。
