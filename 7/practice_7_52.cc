//聚合类才能做到上述操作
//而Sales_data类型不是聚合类
//所以需要将Sales_data改为聚合类
//
//聚合类需要满足的条件如下：
//1. 所有成员都是public的
//2. 没有定义构造函数
//3. 没有类初始值
//4. 没有基类，也没有virtual函数
//
//所以将Sales_data改为：
//
struct Sales_data {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};
