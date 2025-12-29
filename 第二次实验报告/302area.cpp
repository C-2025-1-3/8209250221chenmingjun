//编写程序满足：声明一个函数，判断一个整数是否为素数，找出前200个素数
#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num < 2)
		return false;
	if (num == 2)
		return true;
	if (num % 2 == 0)
		return false;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0)
			return false;
	}
	return true;
}
int main() {
	int sum = 0;
	int i = 2;
	while (sum <200) {
		if (is_prime(i) == true)
		{
			cout << i << "\t";
			sum++;
			if (sum % 10 == 0)
				cout << "\n";
		}
		i++;
		
	}
	return 0;
}