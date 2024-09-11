#define _CRT_SECURE_NO_DEPRECATE
#define M_PI            3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <locale.h>
void task1();
void task2();

int main()
{
	setlocale(LC_ALL, "RUS");
	double s;
	int gr;
	printf("Введите значение gr\n");
	scanf("%d", &gr);
	s = gr * M_PI / 180;
	printf("Синус равен %f\n", sin(s));
	printf("Значение в радианах = %lg", s);
	void task1();
}
void task1()
{
	double x = 1, y = 3, res2, res3, res4, res5, Result;
	res2 = pow(x, 0.5 * y);
	res3 = sin(res2);
	res4 = y + 8e-4;
	res5 = pow(res4, 1 / 5.f);
	Result = res3 + res5;
	Result = sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f);
	printf("Ответ: %.3f", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
	void task2();
}
void task2()
{
	double x, k = -4, a = 2;
}