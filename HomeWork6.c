#include <stdio.h>
#include<locale.h>
#include<math.h>

void f1(int m, int d, int y)
{
	int res;
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			res = 31 - d;
			printf("\nОставшееся количество дней до конца месяца: %d", res);
		}
			else if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				res = 30 - d;
				printf("Оставшееся количество дней до конца месяца: %d", res);
			}
				else if (m == 2)
				{
					if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
					{
						res = 29 - d;
						printf("\nОставшееся количество дней до конца месяца: %d", res);
					}
					else
					{
						res = 28 - d;
						printf("\nОставшееся количество дней до конца месяца: %d", res);
					}
				}
		else
		{
			printf("Такого месяца не существует");
		}
}

void f2(int y, int d, int m)
{
	int feb;
	int daysOfYear;
	int res_y;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		feb = 29;
		daysOfYear = 366;
	}
	else
	{
		daysOfYear = 365;
		feb = 28;
	}

		if (m == 1)
		{
			res_y = daysOfYear - d;
			printf("До конца года осталось дней: %d", res_y);
		}
			else if (m == 2)
			{
			res_y = daysOfYear - (31 + d);
				printf("До конца года осталось дней: %d", res_y);
			}
				else if (m == 3)
				{
					res_y = daysOfYear - (31 + feb + d);
					printf("До конца года осталось дней: %d", res_y);
				}
					else if (m == 4)
					{
						res_y = daysOfYear - (31 + feb + 31 + d);
						printf("До конца года осталось дней: %d", res_y);
					}
						else if (m == 5)
						{
							res_y = daysOfYear - (31 + feb + 31 + 30 + d);
							printf("До конца года осталось дней: %d", res_y);
						}
							else if (m == 6)
							{
								res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + d);
								printf("До конца года осталось дней: %d", res_y);
							}
								else if (m == 7)
								{
									res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + d);
									printf("До конца года осталось дней: %d", res_y);
								}
									else if (m == 8)
									{
										res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + 31 + d);
										printf("До конца года осталось дней: %d", res_y);
									}
										else if (m == 9)
										{
											res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + 31 + 30 + d);
											printf("До конца года осталось дней: %d", res_y);
										}
											else if (m == 10)
											{
												res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + 31 + 30 + 31 + d);
												printf("До конца года осталось дней: %d", res_y);
											}
												else if (m == 11)
												{
													res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + d);
													printf("До конца года осталось дней: %d", res_y);
												}
													else if (m == 12)
													{
														res_y = daysOfYear - (31 + feb + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + d);
														printf("До конца года осталось дней: %d", res_y);
													}

}



void main()
{
	setlocale(LC_ALL, "RUS");
	printf("\n----------------------------------------------");

	printf("\nЗадание 3");
	printf("\n22. Написать программу, которая по введенной дате вычисляет,\
\nсколько дней осталось до конца месяца или года в соответствии с запросом пользователя.");

	int days, month, year, choice, res, usl, res_y, feb, daysOfYear;

	printf("\nВведите дату: ");

	printf("\nВведите число: ");
	scanf("%d", &days);
	printf("\nВведите месяц: ");
	scanf("%d", &month);
	printf("\nВведите год: ");
	scanf("%d", &year);
	usl = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	printf("\nВы желаете рассчитать количество дней до конца месяца или года? (для первого случая нажмите 1, для второго - 2): ");
	scanf("%d", &choice);

	if (choice == 1) 
	{
		f1(month, days, year);
	}

	if (choice == 2)
	{
		f2(year, days, month);
	}
}

	
