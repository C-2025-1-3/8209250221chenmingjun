//编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，
//否则返回 - 1。在主程序中输入字符串s1与s2，调用函数实现。
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	if (s1[0] == '\0') {
		return 0;
	}
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2) {
		return -1;
	}

	for (int i = 0; i <= len2 - len1; i++)
	{
		bool found = true;
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				found = false;
				break;
			}
		}
		if (found) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100] ;
	char s2[100];
	cout << "请输入字符串s1：" << endl;
	cin.getline(s1, sizeof(s1));
	cout << "请输入字符串s2：" << endl;
	cin.getline(s2, sizeof(s2));
	int result = indexof(s1, s2);
	if (result != -1)
	{
		cout << "'" << s1 << "'在'" << s2 << "'中第一次出现的位置是：" << result<< endl;
	}
	else {
		cout << "'" << s1 << "'不是'" << s2 << "'的子串" << endl;
	}
	system("pause");
	return 0;
}