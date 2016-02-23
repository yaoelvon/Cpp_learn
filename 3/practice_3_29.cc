相比于vector，数组有哪些缺点：
数组的大小在初始化后不可改变，不能随意的向数组中添加元素，损失了灵活性，一旦越界还可能导致未知的后果

数组与vector的相似之处是都能存放类型相同的对象，且这些对象本身没有名字，需要通过其所在位置访问。
数组与vector最大的不同是，数组的大小是固定不变的，不能随意向数组中增加额外的元素，虽然在某些情况下运行良好，但是
与vector相比，损失了灵活性。
vector可以使用size函数直接获取维度，而对于数组，如果是字符数组，可以通过strlen函数得到字符串的长度；
如果是其他数组，只能使用sizeof(array)/sizeof(array[0])的方式计算数组的维度