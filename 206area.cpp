//编写一个程序：从键盘上输入两个正整数，
// 求a和b的最大公约数与最小公倍数。
#include<iostream>
using namespace std;
int main() {
	int a, b,c,i;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	c = a <= b ? a : b;
	for (i = c; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << a << "与" << b << "的最大公约数是" << i << endl;
			break;
		}
	}
	cout << a << "与" << b << "的最小公倍数是" << (a / i) * (b / i) * i << endl;
	return 0;
}