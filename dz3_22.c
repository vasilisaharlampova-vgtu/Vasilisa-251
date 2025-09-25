#include <stdio.h>
#include <locale.h>

void main()
{
	float k;
	float price;
	setlocale(LC_ALL, "RUS");
	printf("Ââåäèòå êîëè÷åñòâî ïîêóïàåìûõ òîâàðîâ: ");
	scanf("%f", &k);
	printf("\nÂû ïîêóïàåòå %.0f òîâàðîâ", k);
	printf("\nÂâåäèòå öåíó òîâàðà: ");
	scanf("%f", &price);
	printf("\nÂû ââåëè öåíó çà 1 òîâàð: %.2f ðóá", price);
	printf("\nÑòîèìîñòü ïîêóïêè ñîñòàâèëà: %.2f ðóá.", k * price);

}
