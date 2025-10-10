#include<stdio.h>
#include<locale.h>

void main()
{
	int A, B, C, dispetcher;
	setlocale(LC_ALL, "RUS");
	
	printf("Домашняя работа №4, вариант №4 Харламповой Василисы");
	printf("\n\nДоставка грузов");
	
	printf("\nВведите вес первого груза: ");
	scanf("%d", &A);
	
	printf("\nВведите вес второго груза: ");
	scanf("%d", &B);
	
	printf("\nВведите вес третьего груза: ");
	scanf("%d", &C);


	dispetcher = (A % 5 == 0 && B % 5 == 0 && C % 5 == 0);
	printf("Доступ разрешен (1 - да, 0 - нет): %d\n", dispetcher);

}

