#include <stdio.h>
#include "deposit.h"

int main()
{
	int day;
	float vklad, rez;
	
	printf("Введите сумму вклада(в т.р): ");
	if (scanf("%f", &vklad) != 1) {
		printf("Неверная форма ввода вклада!\n");
		return 1;
	}
	printf("Срок вклада: ");
	if (scanf("%d", &day) != 1) {
		printf("Неверная форма ввода срок!\n");
		return 1;
	}

	int i = corect(vklad, day);
	if (i == 0) {
		rez = prover(vklad, day);
		printf("Размер вклада на конец срока(в т. р.): %.2f\n", rez);
	} else {
		printf("Вклад или срок указаны неверно!\n");
	}
	
	return 0;
}