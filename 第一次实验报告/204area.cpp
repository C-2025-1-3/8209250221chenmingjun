//完成计算器程序，实现（+ - * / %）运算。
//考虑除数为0与运算符非法的情况。
#include<iostream>
using namespace std;
int main() {
	char a;
	float b, c;
	cout << "请输入运算符号" << endl;
	cin >> a;
	cout << "请输入进行运算的两个数" << endl;
	cin >> b >> c;
	if (a == '/')
	{
		if (c == 0)
			cout << "除数为0，无法计算" << endl;
		else
			cout << b / c << endl;
	}
	else
	{
		if (a == '+')
			cout << b + c << endl;
		else if (a == '-')
			cout << b - c << endl;
		else if (a == '*')
			cout << b * c << endl;
		else
			cout << "运算符非法" << endl;
	}
	
	return 0;
}