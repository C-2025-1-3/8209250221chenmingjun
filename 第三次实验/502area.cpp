#include<iostream>
using namespace std;
#include"student.h"
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:";
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i];
		if (i == strlen(name) - 1)
			cout << endl;
	}
	
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char nam[], char s)
{
	num = n;
	sex = s;
	strcpy_s(name, sizeof(nam), nam);
}
int main() {
	Student stud;
	stud.set_value(007, "teg",'m');
	stud.display();
	system("pause");
	return 0;
}