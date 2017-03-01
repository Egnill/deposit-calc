#include <stdio.h>
#include "dc.h"

int main()
{
	int day;
	float vklad;
	
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
		prover(vklad, day);
	} else {
		printf("Вклад или срок указаны неверно!\n");
	}
	
	return 0;
}