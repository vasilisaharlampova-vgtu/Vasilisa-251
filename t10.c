#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_rectangle(int ch, int a, int b)
{
	int square = a * b;
	printf("%d: Площадь золотого прямоугольника : %d", ch, square);
}

void draw_rectangle(int ch, int a, int b, char c)
{
	int i = 0;
	int j = 1;

	printf("\n%d: Золотой прямоугольник (%d * %d):\n", ch, a, b);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
}

int get_parametr(int ch, int a, int b)
{
	printf("\n%d: Параметры вашей фигуры:\n Длина прямоугольника: %d; Ширина прямоугольника: %d\n", ch, a, b);
}

int definition(int ch, int a, int b)
{
	printf("%d: Золотой прямоугольник — это прямоугольник, у которого отношение длины (%d) к ширине (%d) равно золотому сечению (1,618...).", ch, a, b);
}

void main()
{
	int resume;

	
		setlocale(LC_ALL, "RUS");

		printf("\n");
		printf("\nДомашняя работа №10");
		printf("\n");

		char c;
		int a;
		int choice;
		double phi = (1.0 + sqrt(5.0)) / 2.0;

		printf("\nВведите символ, из которого будет стрoиться \"золотой\" прямоугольник: \n");
		scanf("%c", &c);

		printf("\nВведите значение длины \"золотого\" прямоугольника (большую сторону): \n");
		scanf("%d", &a);

		int b = (int)round(a / phi);

		/*printf("\n");
		system("pause");*/

		do {
			
			printf("\nЧто желаете рассчитать?\n");
			printf("\n1. Рассчитать площадь золотого прямоугольника (введите 1);\n 2. Вывести параметры фигуры (введите 2); \n3. Нарисовать фигуру (введите 3);\n3. Вывести определение фигуры (введите 4);\n");
			scanf("%d", &choice);

			switch (choice) {
			case 1:
				area_rectangle(choice, a, b);
				break;
			case 2:
				get_parametr(choice, a, b);
				break;
			case 3:
				draw_rectangle(choice, a, b, c);
				break;
			case 4:
				definition(choice, a, b);
				break;
			}

			printf("\n");
			system("pause");
			
			printf("\nЖелаете заново вывести меню? Если да - нажмите 1, нет - любую другую цифру");
			printf("\n");
			scanf("%d", &resume);

			if (resume == 1) printf("\nВы ввели %d, заново запускаю программу...", resume);
			else printf("\nВы ввели %d, останавливаю программу...", resume);

		} while (resume == 1);
	
		printf("\n");
		system("pause");
}