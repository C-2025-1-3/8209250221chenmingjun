#include<iostream>
using namespace std;
int main() {

	int a = 1;
	for (int i = 10; i > 1; i--)
	{
		a = (a + 1) * 2;
	}
	cout << "第一天猴子共摘了" << a << "个桃" << endl;
	system("pause");
	return 0;
}