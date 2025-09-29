#include<iostream>
using namespace std;

#define tab "\t"

void Elevator(int floor);
int Factorial(int a);
double Power(double a, int b);
int Fibonacci(int i);

void main() {
	setlocale(LC_ALL, "");
	
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	Elevator(n);
	
	double a;
	cout << "Введите Число: "; cin >> a;
	cout << "Факториал числа " << Factorial(a) << endl;
	
	int b;
	cout << "Введите степень числа: "; cin >> b;
	cout << "Число " << a << " в степени " << b << " равно: " << Power(a, b) << endl;

	int lim, fib, i = 0;
	cout << "Введите предел ряда Фиббоначчи: "; cin >> lim;
	while ((fib = Fibonacci(i)) <= lim) {
		cout << fib << tab;
		i++;
	}
}

void Elevator(int floor) {
	if (floor == 0) {
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже" << endl;
	Elevator(floor - 1);
	cout << "Вы на " << floor << " этаже" << endl;
}

int Factorial(int a) {
	if (a > 1) return a * Factorial(a - 1);
	else return 1;
}

double Power(double a, int b) {
	if (b == 0)return 1;
	else if (b < 0)return 1 / Power(a, -b);
	else return a * Power (a, b - 1);
}

int Fibonacci(int i) {
	if ((i == 0)||(i == 1)) return i;
else return Fibonacci(i - 1)+ Fibonacci(i - 2);
}


	
