#include <stdio.h>
#include <locale.h>

void main()
{
	float k;
	float price;
	setlocale(LC_ALL, "RUS");
	printf("������� ���������� ���������� �������: ");
	scanf("%f", &k);
	printf("\n�� ��������� %.0f �������", k);
	printf("\n������� ���� ������: ");
	scanf("%f", &price);
	printf("\n�� ����� ���� �� 1 �����: %.2f ���", price);
	printf("\n��������� ������� ���������: %.2f ���.", k * price);
}