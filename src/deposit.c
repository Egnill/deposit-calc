#include <stdio.h>
#include "deposit.h"

int corect(float vklad, int day)
{
	if (vklad < 10) {
		return 1;
	}
	if (day < 0 || day > 365) {
		return 1;
	}

	return 0;
}

void prover(float vklad, int day)
{
	float rez;
	if (vklad <= 100) {
		if (day >= 0 && day <= 30) {
				rez = vklad * 0.9;
			}
		if (day >= 31 && day <= 79) {
				rez = vklad * 1.02;
			}
		if (day >= 80 && day <= 100) {
				rez = vklad * 1.5;
			}
		if (day >= 101 && day <= 120) {
				rez = vklad * 1.02;
			}
		if (day >= 121 && day <= 240) {
				rez = vklad * 1.06;
			}
		if (day >= 241 && day <= 365) {
				rez = vklad * 1.12;
			}
	} else {
		if (vklad > 100) {
			if (day >= 0 && day <= 30) {
				rez = vklad * 0.9;
			}
			if (day >= 31 && day <= 79) {
				rez = vklad * 1.03;
			}
			if (day >= 80 && day <= 100) {
				rez = vklad * 1.5;
			}
			if (day >= 101 && day <= 120) {
				rez = vklad * 1.03;
			}
			if (day >= 121 && day <= 240) {
				rez = vklad * 1.08;
			}
			if (day >= 241 && day <= 365) {
				rez = vklad * 1.15;
			}
		} 
	}
	
	printf("Размер вклада на конец срока(в т. р.): %.2f\n", rez);
}