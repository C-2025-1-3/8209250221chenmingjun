//4、建立一个对象数组，内放5个学生的（学号，成绩），
//设立一个函数max，用指向对象的指针作函数参数，
//在max函数中找出5个学生的最高成绩者，并输出其学号。
#include<iostream>
using namespace std;
class student {
private:
	int id;
	int score;
public:
	void set_value() {
		cin >> id >> score;
	}
	int get_id() {
		return id;
	}
	int get_score() {
		return score;
	}
};
void max(student* a,int size) {
	int max = 0;
	int maxnum=0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i].get_score() > max)
		{
			max = a[i].get_score();
			maxnum = i;
		}
	}
	cout << "最高成绩者的成绩是：" << max << endl;
	cout << "最高成绩者的学号是：" << a[maxnum].get_id() << endl;
}

int main() {
	student a[5];
	cout << "请输入5个学生的学号及成绩：" << endl;
	for (int i = 0; i < 5; i++)
	{
		a[i].set_value();
	}
	max(a,5);//传入首地址和数组长度
	system("pause");
	return 0;
}
