#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
	setlocale(LC_ALL, "RUS");
	int yeas;
	puts("Введите год");
	scanf_s("%d", &yeas);
	int yeas4 = yeas % 4;
	if ((yeas4 == 0) && (yeas % 100 != 0) || (yeas % 400 == 0)) {
		printf("Год %d - високостный\n", yeas);
    }
	else {
		printf("Год %d - не високостный\n", yeas);
		}

	//задание 2 вариант 12
	double x;
	puts("Введите х");
	scanf_s("%d", &x);
	if (x <= 3) {
		printf("Функция F(x) = %.4f\n", pow(-x, 2) + (3 * x) + 9);
	}
	else {
		printf("Функция F(x) = %.4f\n", pow(x, 3) / (pow(x, 2) + 8));
	}
}