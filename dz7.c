#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	char letter;

	printf("Äîìàøíÿÿ ðàáîòà ê ëàáîðàòîðíîé ¹7, âàðèàíò 23\n");

	printf("\nÂâåäèòå àíãëèéñêóþ áóêâó (ñòðî÷íóþ), ÷òîáû óçíàòü å¸ ïîðÿäêîâûé íîìåð â àëôàâèòå: ");
	scanf("%c", &letter);

	switch(letter)
	{
		case 'a': 
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 1);
			break;

		case 'b':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 2);
			break;

		case 'c':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 3);
			break;

		case 'd':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 4);
			break;

		case 'e':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 5);
			break;

		case 'f':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 6);
			break;

		case 'g':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 7);
			break;

		case 'h':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 8);
			break;

		case 'i':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 9);
			break;

		case 'j':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 10);
			break;

		case 'k':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 11);
			break;

		case 'l':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 12);
			break;

		case 'm':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 13);
			break;

		case 'n':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 14);
			break;

		case 'o':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 15);
			break;

		case 'p':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 16);
			break;

		case 'q':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 17);
			break;

		case 'r':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 18);
			break;

		case 's':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 19);
			break;

		case 't':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 20);
			break;

		case 'u':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 21);
			break;

		case 'v':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 22);
			break;

		case 'w':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 23);
			break;

		case 'x':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 24);
			break;

		case 'y':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 25);
			break;

		case 'z':
			printf("\nÏîðÿäêîâûé íîìåð áóêâû %c: %d", letter, 26);
			break;

		default:
			printf("\nÍåèçâåñòíûé ñèìâîë\n");
	}
	printf("\n");
	system("pause");

	return 0;

}
