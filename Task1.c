#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	char letter;

	printf("Домашняя работа к лабораторной №7, вариант 23\n");

	printf("\nВведите английскую букву (строчную), чтобы узнать её порядковый номер в алфавите: ");
	scanf("%c", &letter);

	switch(letter)
	{
		case 'a': 
			printf("\nПорядковый номер буквы %c: %d", letter, 1);
			break;

		case 'b':
			printf("\nПорядковый номер буквы %c: %d", letter, 2);
			break;

		case 'c':
			printf("\nПорядковый номер буквы %c: %d", letter, 3);
			break;

		case 'd':
			printf("\nПорядковый номер буквы %c: %d", letter, 4);
			break;

		case 'e':
			printf("\nПорядковый номер буквы %c: %d", letter, 5);
			break;

		case 'f':
			printf("\nПорядковый номер буквы %c: %d", letter, 6);
			break;

		case 'g':
			printf("\nПорядковый номер буквы %c: %d", letter, 7);
			break;

		case 'h':
			printf("\nПорядковый номер буквы %c: %d", letter, 8);
			break;

		case 'i':
			printf("\nПорядковый номер буквы %c: %d", letter, 9);
			break;

		case 'j':
			printf("\nПорядковый номер буквы %c: %d", letter, 10);
			break;

		case 'k':
			printf("\nПорядковый номер буквы %c: %d", letter, 11);
			break;

		case 'l':
			printf("\nПорядковый номер буквы %c: %d", letter, 12);
			break;

		case 'm':
			printf("\nПорядковый номер буквы %c: %d", letter, 13);
			break;

		case 'n':
			printf("\nПорядковый номер буквы %c: %d", letter, 14);
			break;

		case 'o':
			printf("\nПорядковый номер буквы %c: %d", letter, 15);
			break;

		case 'p':
			printf("\nПорядковый номер буквы %c: %d", letter, 16);
			break;

		case 'q':
			printf("\nПорядковый номер буквы %c: %d", letter, 17);
			break;

		case 'r':
			printf("\nПорядковый номер буквы %c: %d", letter, 18);
			break;

		case 's':
			printf("\nПорядковый номер буквы %c: %d", letter, 19);
			break;

		case 't':
			printf("\nПорядковый номер буквы %c: %d", letter, 20);
			break;

		case 'u':
			printf("\nПорядковый номер буквы %c: %d", letter, 21);
			break;

		case 'v':
			printf("\nПорядковый номер буквы %c: %d", letter, 22);
			break;

		case 'w':
			printf("\nПорядковый номер буквы %c: %d", letter, 23);
			break;

		case 'x':
			printf("\nПорядковый номер буквы %c: %d", letter, 24);
			break;

		case 'y':
			printf("\nПорядковый номер буквы %c: %d", letter, 25);
			break;

		case 'z':
			printf("\nПорядковый номер буквы %c: %d", letter, 26);
			break;

		default:
			printf("\nНеизвестный символ\n");
	}
	printf("\n");
	system("pause");

	return 0;
}