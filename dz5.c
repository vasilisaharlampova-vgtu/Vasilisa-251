#define _USE_MATH_DEFINES 
#include <stdio.h>
#include<locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Домашняя работа №5, вариант 22");

	double x, y, result;

	printf("\nВведите параметр х: ");
	scanf("%lf", &x);
	printf("\nВы ввели параметр х: %lf", x);

	printf("\nВведите параметр у: ");
	scanf("%lf", &y);
	printf("\nВы ввели параметр у: %lf", y);

	double a = 2.33 * log(sqrt(1 + pow(cos(x), 2)));
	double b = exp(y) + pow(sin(x), 2);
	
	result = a / b;
	
	printf("\nРезультат вычисления по формуле: %.6lg", result);
	
}