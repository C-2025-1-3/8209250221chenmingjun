//5、检验子串：
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。

#include<iostream>
using namespace std;
int main() {
	char s1[100];
	char s2[100];
	int x=0;
	cout << "Enter the frist string:";
	cin.getline(s2, 100);
	cout << "Enter the second string:";
	cin.getline(s1, 100);
	for (int i = 0; i <=strlen(s1)-strlen(s2); i++)
	{
		if (s1[i] == s2[0])
		{
			x = 0;
			for (int j = 0; j < strlen(s2); j++)
			{
				if (s1[i + j] == s2[j])
					x++;
			}
			if (x == strlen(s2))
			{
				cout << "indexOf"<<"(" << s1 << "," << s2 << ") is " << i;
				break;
			}
		}
	}
	if (x != strlen(s2))
		cout<< "indexOf"<<"(" << s1 << "," << s2 <<")" << "is" << "-1";
	system("pause");
	return 0;
}