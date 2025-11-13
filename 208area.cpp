//迭代法求a的平方根
#include<iostream>
using namespace std;
int main() {
	float a,b,c,d;
	cout << "请输入a"<<endl;
	cin >> a;
	d = a;
	if (a < 0)
	{
		a = -a;
	}
	c= a;
	while(1) 
	{
		b = c;
		c = (b + a/b) / 2;
		if (b - c <= 1e-5 && b - c >= -1e-5)
			break;

	}
		cout << "根号"<<d<<"近似为" << c << endl;
	
		return 0;
}