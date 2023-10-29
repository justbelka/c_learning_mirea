#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, z;  // the input data
	double t;  // the answer for the first task
	char symbol;  // the value of the variable will be changed
	int answer;  // the answer for the second task
	printf("Введи через пробел переменные x y z: ");
	scanf_s("%lf %lf %lf", &x, &y, &z);
	z *= z;
	t = 2 * cos(x - M_PI / 6) / (0,5 + pow(sin(y), 2)) * (1 + z / (3 - z / 5));
	printf("Ответ на первое задание: %lf\n\n", t);

	printf("Введи символ, а я выведу другой: ");

	// in the buffer we have one extra symbol "\n" which needs to be deleted and 
	// I put extra scanf_s to free the buffer 
	scanf_s("%c", &symbol);
	scanf_s("%c", &symbol);
	switch (symbol) {
		case '1':
		case '2':
			answer = 1;
			break;
		case '3':
			answer = 2;
			break;
		case '4':
		case '5':
		case '6':
			answer = 3;
			break;
		default:
			answer = 4;
	}
	printf("Ответ на второе задание: %d\n", answer);
	return 0;
}
