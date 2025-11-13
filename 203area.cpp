//输入三角形的三条边，求周长，
// 并判断该三角形是否为等腰三角形（提示：要三边是否可以构成三角形）
#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形周长是" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
			cout << "该三角形不是等腰三角形" << endl;
	}
	else
		cout << "该三边不能构成三角形" << endl;
	
}