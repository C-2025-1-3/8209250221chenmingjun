//6、字符串中每个字母出现的次数：
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数。
#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	char c;
	int x;
	char d;
	for (int i = 0; i < strlen(s); i++)
	{
		char c = s[i];
		if (c >= 'A' && c <= 'Z')
		{
			c = tolower(c);
		}
		if (c >= 'a' && c <= 'z')
		{
			x = c - 'a';
			counts[x]++;
		}
	}
	for (int j = 0; j < 26; j++)
	{
		if (counts[j] != 0)
		{
			char d = char('a' + j);
			cout << d << " : " << counts[j] << " times" << endl;
		}
	}
}
int main() {
	char s[80];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, 80);
	count(s, counts);
	system("pause");
	return 0;
}