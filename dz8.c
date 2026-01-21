#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, n, f1 = 0, f;

	printf("\nÂâåäèòå çíà÷åíèå ïåðåìåííîé à:\n");
	scanf("%d", &a);

	printf("\nÂâåäèòå çíà÷åíèå ïåðåìåííîé n:\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		f1 += a * (a + i);
	}
	f = f1 + a * (a + n + 1);
	printf("\nðåçóëüòàò âû÷èñëåíèé: %d", f);

}
