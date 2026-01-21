#include <stdio.h>
#include<locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Домашняя работа №9");
	char c;
	int a, b;
	int i = 0;
	int j = 1;
	int k = 0;
	int x = 1;
	double phi = (1.0 + sqrt(5.0)) / 2.0;
	printf("\nВедите символ, из которого будет стрoиться фигура: \n");
	scanf("%c", &c);

	printf("\nВведите значение длины \"золотого\" прямоугольника (большую сторону): \n");
	scanf("%d", &a);


	b = (int)round(a / phi);
	
	if (b <= 0) b = 1; 

	printf("\nЗолотой прямоугольник (%d * %d):\n", a, b);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", c);
		}
		printf("\n");
	}

}