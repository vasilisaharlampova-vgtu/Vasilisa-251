#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int A_PRICE = 300;
	int B_PRICE = 1500;
	int C_PRICE = 1000;
	int D_SUMMA = 1000;
	int CHARGE = D_SUMMA - (A_PRICE + B_PRICE + C_PRICE);

	printf("—оставила программу дл€ определени€ сдачи после покупки в магазине товара: \
		\n перчаток стоимостью %d руб., портфел€ стоимостью %d руб., галстука стоимостью %d руб. \
		\n »сходна€ сумма, выделенна€ на покупку Ц %d руб. —дача равна %d", A_PRICE, B_PRICE, C_PRICE, D_SUMMA, CHARGE);
}