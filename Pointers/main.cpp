#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;



}