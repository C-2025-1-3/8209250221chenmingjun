//写测试程序：读取三角形三边长，如输入合法，计算面积，否则输出错误信息。
#include<iostream>
using namespace std;
#include"304.area mytriangle.h"
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side1 + side3 > side1 && side2 + side3 > side1)
		return true;
	else
		return false;
}
double area(double side1, double side2, double side3) {
	double area;
	double s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2)*(s - side3));
	return area;
}
int main() {
	double a, b, c;
	cout << "请输入三边的长度：" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == true)
	{
		cout << "该三边能构成三角形" << endl;
		cout << "该三角形的面积是" << area(a, b, c) << endl;
	}
	else
		cout << "该三边无法构成三角形，无法计算面积";
	return 0;
}
