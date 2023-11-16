// Белокрылов Александр
// Вариант 1
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <windows.h>


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;  // coordinates of the point
	bool result = false;  // the answer for the task
	printf("Введи коррдинаты точки x y через пробел: ");
	scanf_s("%lf %lf", &x, &y);
	printf("%.3lf %.3lf\n", x, y);

	if ((x >= -2) && (x <= 1) && (y >= -2) && (y <= 2)) {
		if (x >= 0) {
			if ((y >= -2 * x + 2) || (y <= 2 * x - 2)) {
				result = true;
			}
		}
		else {
			if ((x * x + y * y <= 4) && ((y >= -x) || (y <= x))) {
				result = true;
			}
			else if ((x * x + y * y >= 4) && (y <= -x) && (y >= x)) {
				result = true;
			}
		}
	}
	
	if (result) {
		printf("Попал!");
	}
	else {
		printf("Не попал!");
	}

	return 0;
}
