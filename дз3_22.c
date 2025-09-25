#include <stdio.h>
#include <locale.h>

void main()
{
	float k;
	float price;
	setlocale(LC_ALL, "RUS");
	printf("Введите количество покупаемых товаров: ");
	scanf("%f", &k);
	printf("\nВы покупаете %.0f товаров", k);
	printf("\nВведите цену товара: ");
	scanf("%f", &price);
	printf("\nВы ввели цену за 1 товар: %.2f руб", price);
	printf("\nСтоимость покупки составила: %.2f руб.", k * price);
}