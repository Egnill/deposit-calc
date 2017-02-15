#include <stdio.h>

void prover(float vklad, int day, float *rez);
int main()
{
	int day;
	float vklad, rez = 0;
	
	printf("Введите сумму вклада(в т.р) и срок вклада: ");
	scanf("%f%d", &vklad, &day);
	
	prover(vklad, day, &rez);
	
	printf("Размер вклада на конец срока(в т. р.): %.2f\n", rez);
	
	return 0;
}

void prover(float vklad, int day, float *rez)
{
	if (vklad <= 100) {
		if (day >= 0 && day <= 30) {
				*rez = vklad * 0.9;
			}
		if (day >= 31 && day <= 120) {
				*rez = vklad * 1.02;
			}
		if (day >= 121 && day <= 240) {
				*rez = vklad * 1.06;
			}
		if (day >= 241 && day <= 365) {
				*rez = vklad * 1.12;
			}
	} else {
		if (vklad > 100) {
			if (day >= 0 && day <= 30) {
				*rez = vklad * 0.9;
			}
			if (day >= 31 && day <= 120) {
				*rez = vklad * 1.03;
			}
			if (day >= 121 && day <= 240) {
				*rez = vklad * 1.08;
			}
			if (day >= 241 && day <= 365) {
				*rez = vklad * 1.15;
			}
		}
	}
}