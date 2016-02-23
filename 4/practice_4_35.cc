
//下列发生了隐式类型转换吗？

(a)cval = 'a' + 3;
	发生了隐式类型转换，整型提升，'a'提升为int型，与3相加，然后结果转换为char型赋给cval
(b)fval = ui - ival * 1.0;
	发生了隐式转换，ival转化为double型与1.0相乘，ui转换为double型减去之前的结果，然后运算结果转换为float型赋给bval
(c)dval = ui * fval;
	ui和fval都转换成double类型，运算结果赋给dval
(d)cval = ival + fval + dval;
	ival、fval、dval都变成double类型，运算完成后转换成char型赋给cval
