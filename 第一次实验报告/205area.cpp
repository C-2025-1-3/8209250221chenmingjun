//输入一行字符，
//分别统计出其中英文字母、空格、数字字符和其它字符的个数。
#include<iostream>
using namespace std;
int main() {
	char ch;
	int a, b, c, d;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	cout << "请输入一行字符" << endl;
	ch = getchar();
	while(ch!='\n')
	{ 
		if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
		{
			a++;
		}
		else if (ch == ' ')
		{
			b++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			c++;
		}
		else
		{
			d++;
		}
		ch = getchar();
	}
	cout << "英文字母字符个数为:" << a << endl;
	cout << "空格字符个数为:" << b << endl;
	cout << "数字字符个数为：" << c << endl;
	cout << "其他字符个数为:" << d << endl;
	return 0;
}