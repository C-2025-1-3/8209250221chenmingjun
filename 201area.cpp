#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a >= 97 && a <= 122)
		cout << static_cast<char>(a-32) << endl;
	else
		cout << (static_cast<int>(a))<< endl;
	return 0;
}