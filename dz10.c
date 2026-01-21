#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_rectangle(int ch, int a, int b)
{
	int square = a * b;
	printf("%d: Ïëîùàäü çîëîòîãî ïðÿìîóãîëüíèêà : %d", ch, square);
}

void draw_rectangle(int ch, int a, int b, char c)
{
	int i = 0;
	int j = 1;

	printf("\n%d: Çîëîòîé ïðÿìîóãîëüíèê (%d * %d):\n", ch, a, b);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
}

int get_parametr(int ch, int a, int b)
{
	printf("\n%d: Ïàðàìåòðû âàøåé ôèãóðû:\n Äëèíà ïðÿìîóãîëüíèêà: %d; Øèðèíà ïðÿìîóãîëüíèêà: %d\n", ch, a, b);
}

int definition(int ch, int a, int b)
{
	printf("%d: Çîëîòîé ïðÿìîóãîëüíèê — ýòî ïðÿìîóãîëüíèê, ó êîòîðîãî îòíîøåíèå äëèíû (%d) ê øèðèíå (%d) ðàâíî çîëîòîìó ñå÷åíèþ (1,618...).", ch, a, b);
}

void main()
{
	int resume;

	
		setlocale(LC_ALL, "RUS");

		printf("\n");
		printf("\nÄîìàøíÿÿ ðàáîòà ¹10");
		printf("\n");

		char c;
		int a;
		int choice;
		double phi = (1.0 + sqrt(5.0)) / 2.0;

		printf("\nÂâåäèòå ñèìâîë, èç êîòîðîãî áóäåò ñòðoèòüñÿ \"çîëîòîé\" ïðÿìîóãîëüíèê: \n");
		scanf("%c", &c);

		printf("\nÂâåäèòå çíà÷åíèå äëèíû \"çîëîòîãî\" ïðÿìîóãîëüíèêà (áîëüøóþ ñòîðîíó): \n");
		scanf("%d", &a);

		int b = (int)round(a / phi);

		/*printf("\n");
		system("pause");*/

		do {
			
			printf("\n×òî æåëàåòå ðàññ÷èòàòü?\n");
			printf("\n1. Ðàññ÷èòàòü ïëîùàäü çîëîòîãî ïðÿìîóãîëüíèêà (ââåäèòå 1);\n 2. Âûâåñòè ïàðàìåòðû ôèãóðû (ââåäèòå 2); \n3. Íàðèñîâàòü ôèãóðó (ââåäèòå 3);\n3. Âûâåñòè îïðåäåëåíèå ôèãóðû (ââåäèòå 4);\n");
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
			
			printf("\nÆåëàåòå çàíîâî âûâåñòè ìåíþ? Åñëè äà - íàæìèòå 1, íåò - ëþáóþ äðóãóþ öèôðó");
			printf("\n");
			scanf("%d", &resume);

			if (resume == 1) printf("\nÂû ââåëè %d, çàíîâî çàïóñêàþ ïðîãðàììó...", resume);
			else printf("\nÂû ââåëè %d, îñòàíàâëèâàþ ïðîãðàììó...", resume);

		} while (resume == 1);
	
		printf("\n");
		system("pause");

}
