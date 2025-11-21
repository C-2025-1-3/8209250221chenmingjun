//华氏度转化为摄氏度并保留两位小数
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cin >> a;
	b = 5 * (a - 32) / 9;
	cout <<fixed<< setprecision(2) << b << endl;
	return 0;
}