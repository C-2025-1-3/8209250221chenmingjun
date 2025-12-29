//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
#include<iostream>
using namespace std;
//求最大公约数的函数
int  gys(int a, int b)
{
	int t = (a >= b ? b : a);
	for (int i = t; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << "最大公约数为" << gys(num1, num2) << endl;
	system("pause");
	return 0;
}