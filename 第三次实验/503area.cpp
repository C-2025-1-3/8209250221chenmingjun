#include<iostream>
using namespace std;
class cft {
public:
	void getV() {
		float v;
		v = length*width*height;
		cout << v << endl;
	}
	void setcft() {
		float a, b, c;
		cin >> a >> b >> c;
		length = a;
		width = b;
		height = c;
	}
private:
	float length;
	float width;
	float height;
};
int main() {
	cft t1, t2, t3;
	cout << "请输入第一个长方体的长、宽、高：";
	t1.setcft();
	cout << "请输入第二个长方体的长、宽、高：";
	t2.setcft();
	cout << "请输入第三个长方体的长、宽、高：";
	t3.setcft();
	cout << "第一个长方体的体积是：";
	t1.getV();
	cout << "第二个长方体的体积是：";
	t2.getV();
	cout << "第三个长方体的体积是：";
	t3.getV();
	system("pause");
	return 0;
}