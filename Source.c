#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
	setlocale(LC_ALL, "RUS");
	int yeas;
	puts("������� ���");
	scanf_s("%d", &yeas);
	int yeas4 = yeas % 4;
	if ((yeas4 == 0) && (yeas % 100 != 0) || (yeas % 400 == 0)) {
		printf("��� %d - �����������\n", yeas);
    }
	else {
		printf("��� %d - �� �����������\n", yeas);
		}

	//������� 2 ������� 12
	double x;
	puts("������� �");
	scanf_s("%d", &x);
	if (x <= 3) {
		printf("������� F(x) = %.4f\n", pow(-x, 2) + (3 * x) + 9);
	}
	else {
		printf("������� F(x) = %.4f\n", pow(x, 3) / (pow(x, 2) + 8));
	}
}