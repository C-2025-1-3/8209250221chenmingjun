//(3) 主程序中建立一动态数组（使用new），
//数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
//设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
#include<iostream>
using namespace std;
void paixu(int*a,int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main() {
	int n;
	cout << "请输入元素个数:" << endl;
	cin >> n;
	int* a = new int[n];
	cout << "请输入元素:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	paixu(a,n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete[]a;
	system("pause");
	return 0;
}