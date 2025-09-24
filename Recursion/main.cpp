#include<iostream>
using namespace std;

#define tab "\t"


void elevator(int floor);
int Factorial(int n);
void Fibonacci(int n);


void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);

	cout << "Факториал числа " << Factorial(n) << endl;

	/*
	for (int i = 0; i < n; i++) {

		cout << Fibonacci(n) << tab;
	}
	cout << endl;
}
*/

}

void elevator(int floor)
{
	if (floor == 0) {
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже" << endl;
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже" << endl;
}

int Factorial(int n) {
	if (n > 1) return n * Factorial(n-1);
	else return 1;
}

void Fibonacci(int n) {
	if (n == 0) {
		cout << "Число Фиббоначчи: 0" << endl;
		return;
	}
	if (n == 1) {
		cout << "Число Фиббоначчи: 1" << endl;
		return;
	}
	//Fibonacci(n - 1) + (n - 2);
	Fibonacci(n - 1);
}



	
