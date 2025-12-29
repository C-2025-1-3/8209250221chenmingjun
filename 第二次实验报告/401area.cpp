//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。

#include<iostream>
using namespace std;
int main() {
	int a[10];
	int n;
	int js = 0;	//看有没有跟前面的重复,
	cout << "Enter ten numbers:";
	cin >> a[0];
	int yy = 1;//表示已经有的占有的数组的个数
	for (int i = 1; i < 10; i++)
	{
		cin >> n;
		for (int j = 0; j <yy;j++)
		{
			if (n != a[j])
				js++;
		}
		if (js == yy) {
			a[yy] = n;
			yy++;
		}
		js = 0;
	}
	cout << "The distinct numbers are:";
	for (int k = 0; k < yy; k++)
		cout << a[k] << " ";
	system("pause");
	return 0;
}