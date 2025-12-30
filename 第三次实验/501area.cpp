//改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数。
//然后编译和运行程序。请分析什么成员应指定为公用的 ? 什么成员应指定为私有的 ? 
//什么函数最好放在类中定义 ? 什么函数最好在类外定义 ?

#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;

public:
	void settime(int h,int m,int s) {
		hour = (h>=0&&h<=24)?h:0;
		minute = (m>=0&&m<=60)?m:0;
		sec = (s>=0&&s<=60)?s:0;
	}
	void gettime() {
		cout << "时间是" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	int h, m, s;
	cout << "请分别输入时分秒：";
	cin >> h >> m >> s;
	t1.settime(h, m, s);
	t1.gettime();
	system("pause");
	return 0;
}
