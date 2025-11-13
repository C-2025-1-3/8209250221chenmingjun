//苹果问题
#include<iostream>
using namespace std;
int main()
{
	int i = 2;
	float num = 0;
	float day = 0;
	while (1)
	{
		if (num <= 100)
		{
			num = num + i;
			day++;
			i = i * 2;
		}
		else
			break;
	}
	cout << "平均每天花" << 0.8 * num / day << "元钱" << endl;
	return 0;
}
