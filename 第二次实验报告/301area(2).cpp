//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include<iostream>
using namespace std;
void gysgbs(int& a, int& b) {
	int c = a;
	int d = b;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	b = c * d / a;
}
int main() {
	int m, n;
	cout << "请输入两个数字m,n:" << endl;
	cin >> m >> n;
	gysgbs(m, n);
	cout << "m,n的最大公约数是" << m << endl;
	cout << "m,n的最大公倍数是" << n << endl;
	system("pause");
	return 0;
}