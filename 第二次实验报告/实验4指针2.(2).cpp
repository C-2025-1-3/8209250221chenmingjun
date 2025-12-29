//(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回165

#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int len = strlen(hexString);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (hexString[i] <= '9' && hexString[i] >= '0')
		{
			int x = hexString[i] - 48;
			sum = sum +x* pow(16, len-i-1);
	
		}
		if (hexString[i] <= 'f' && hexString[i] >= 'a')
		{
			int y = hexString[i] - 87;
			sum = sum + y * pow(16, len - i - 1);
		}
		if (hexString[i] <= 'F' && hexString[i] >= 'A')
		{
			int l = hexString[i] - 55;
			sum = sum + l*pow(16, len - i - 1);
		}
	}
	return sum;
}
int main() {
	char s1[100];
	cout << "请输入一个16进制的字符串：" << endl;
	cin.getline(s1, sizeof(s1));
	int result = parseHex(s1);
	cout << "转化为十进制后为：" << result << endl;
	system("pause");
	return 0;

}