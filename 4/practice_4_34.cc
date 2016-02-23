//下面发生了怎么样的类型转换：

(a) if(fval)
	将float类型的fval转换成bool型
(b) dval = fval + ival;
fval和ival都提升为doubel类型
(c) dval + ival * cval;
cval先提升为int型，与ival计算完后，结果提升为double型，然后和dval相加
