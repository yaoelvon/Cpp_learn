//使用stack处理括号化的表达式
//这里输入的字符串，外部必须包右小括号，内部也可以出现括号
#include <iostream>
#include <stack>
#include <string>

using namespace std;

//计算某个括号中算式的结果，不限制算式的长度
//默认传入的字符串符合要求，所以未进行字符串判断
int calc_bracket_expr(string s)
{
	int calc_result = 0;
	int operand1 = 0, operand2 = 0;
	char operator_val = 0;
	int p = 0;//位置变量

	string operatoral_chacter("+-");

	operand1 = stoi(s.substr(s.find_first_of("0123456789", p)));
	p += to_string(operand1).size() + 1;//p指向下一个计算量

	while(p <= s.size())
	{
		operator_val = s[p-1];	
		operand2 = stoi(s.substr(s.find_first_of("0123456789", p)));
		p += to_string(operand2).size() + 1;

		if(operator_val == '+')
		{
			operand1 = operand1 + operand2;
		}
		else
		{
			operand1 = operand1 - operand2;
		}
	}

	return operand1;
}

//括号表达式计算
int bracket_expression_calc(string &bracket_expression_str)
{
	stack<char> intStack;
	int left_bracket = 0;

	for(auto c : bracket_expression_str)
	{
		//左括号,计数
		if(c == '(')
		{
			left_bracket++;
			intStack.push(c);
		}
		else if(c == ')')//遇到右括号，计算当前括号中的数据值
		{
			string s;
			//从栈中获取反向的字符串
			while(intStack.top() != '(')
			{
				s += intStack.top();
				intStack.pop();
			}

			string rs;

			//将字符串正向
			for(int i = s.size() - 1; i >= 0; i--)
			{
				rs += s[i];
			}
			
			intStack.pop();//出栈'('
			int ret_value = -1;

			ret_value = calc_bracket_expr(rs);
			//将计算结果入栈
			string ret_vs = to_string(ret_value);
			for(auto c : ret_vs)
			{
				intStack.push(c);
			}

			--left_bracket;
			if(left_bracket == 0)
				break;
		}
		else 
		{
			intStack.push(c);
		}
	}

	//总体计算结果转换成int型，并返回
	string output_s;
	while(!intStack.empty())
	{
		output_s += intStack.top();
		intStack.pop();
	}

	string true_output_s;
	for(int i = output_s.size() - 1; i >= 0; i--)
	{
		true_output_s += output_s[i];
	}

	return stoi(true_output_s, 0);
}

int main(int argc, const char *argv[])
{
	string calc_s{"(1+2+3+5+8-1)"};

	cout << bracket_expression_calc(calc_s) << endl;
	
	return 0;
}
