#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, n, f1 = 0, f;

	printf("\n¬ведите значение переменной а:\n");
	scanf("%d", &a);

	printf("\n¬ведите значение переменной n:\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		f1 += a * (a + i);
	}
	f = f1 + a * (a + n + 1);
	printf("\nрезультат вычислений: %d", f);
}