//编程实现摄氏温度到华氏温度的转换：
#include<iostream>
#include<iomanip>
using namespace std;
#include"303area mytemperature.h"
double celsius_to_fah(double cel) {
	double fah;
	fah = 9 * cel / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah){
	double cels;
	cels = 5 * (fah - 32) / 9;
	return cels;
}

int main() {
	cout << setw(12) << "Celsius" << setw(15) << "Fahrenheit"<<setw(10)<<"|"<<setw(15) << "Fahrenhrit" << setw(12) << "Celsius" << endl;
	double cels = 40.0;
	double fah = 120.0;
	for (int i = 0; i < 10; i++)
	{
		cout <<fixed<<setprecision(1)<< setw(12) << cels << setw(15) << celsius_to_fah(cels) << setw(10)<<"|" << setw(15) << fah << fixed << setprecision(2)<<setw(12) << fahrenheit_to_cels(fah) << endl;
		cels--;
		fah -= 10;
	}
	system("pause");
	return 0;

}