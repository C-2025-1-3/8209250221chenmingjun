#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x > 0 && x < 1)
		cout << 3 - x * 2 << endl;
	else if (x >= 1 && x < 5)
		cout << 2 / (4 * x) + 1 << endl;
	else if (x >= 5 && x < 10)
		cout << x * x << endl;
	return 0;
		
}