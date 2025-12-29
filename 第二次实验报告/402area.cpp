//фПещеепР
#include<iostream>
using namespace std;
int main() {
	double a[10];
	float b;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				b = a[j +1];
				a[j+1] = a[j];
				a[j] = b;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}