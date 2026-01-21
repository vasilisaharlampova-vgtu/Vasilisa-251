#include <stdio.h>
#include<locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Äîìàøíÿÿ ðàáîòà ¹9");
	char c;
	int a, b;
	int i = 0;
	int j = 1;
	int k = 0;
	int x = 1;
	double phi = (1.0 + sqrt(5.0)) / 2.0;
	printf("\nÂåäèòå ñèìâîë, èç êîòîðîãî áóäåò ñòðoèòüñÿ ôèãóðà: \n");
	scanf("%c", &c);

	printf("\nÂâåäèòå çíà÷åíèå äëèíû \"çîëîòîãî\" ïðÿìîóãîëüíèêà (áîëüøóþ ñòîðîíó): \n");
	scanf("%d", &a);


	b = (int)round(a / phi);
	
	if (b <= 0) b = 1; 

	printf("\nÇîëîòîé ïðÿìîóãîëüíèê (%d * %d):\n", a, b);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", c);
		}
		printf("\n");
	}


}
