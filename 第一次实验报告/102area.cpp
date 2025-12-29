#include<iostream>
using namespace std;
int main() {
	const float pi = 3.14;
	float r, h,v;
	cout << "请输入半径" << endl;
	cin >> r;
	cout << "请输入高" << endl;
	cin >> h;
	v = pi * r * r * h / 3;
	cout << "圆锥的体积是" << v << endl;
	return 0;
}