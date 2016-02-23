iter的类型是vector<string>::iterator，是string类型的迭代器
解引用迭代器，可以获得迭代器所指的对象
(a)*iter++;
等同于*(iter++)
由于后置递增运算符的优先级高于解引用运算符，所以这表达式的意义就是 迭代器先右移一位，然后解引用，
获得所指向的stirng类型,正确
(b)(*iter)++;
错，不能直接对string类型的值进行加减
(c)*iter.empty();
.的优先级高于*，等同于*(iter.empty())
由于iter只是一个迭代器，所以没有empty()这个子项，所以错
(d)iter->empty();
正确，解引用iter并获取该元素名为empty()的函数值
(e)++*iter;
前置递增和解引用的优先级相同，先解引用，再递增，由于string对象不能对其进行递增，所以错
(f)iter++->empty();
可以，等同于iter->empty()加上iter += 1;
