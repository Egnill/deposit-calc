#include <stdio.h>
#include "deposit.h"

int corect(int vklad, int day)
{
	if (vklad < 10000 || (day < 0 || day > 365)) {
		return 1;
	} else {
		return 0;
	}
}

int prover(int vklad, int day)
{
	int rez;
	//int i = 0;
	if (vklad <= 100000) {
		if (day >= 0 && day <= 30) {
			rez = vklad * 0.9;
			return rez;
		}
		if (day >= 31 && day <= 79) {
			rez = vklad * 1.02;
			return rez;
		}
		if (day >= 80 && day <= 100) {
			rez = vklad * 1.5;
			return rez;
		}
		if (day >= 101 && day <= 120) {
			rez = vklad * 1.02;
			return rez;
		}
		if (day >= 121 && day <= 240) {
			rez = vklad * 1.06;
			return rez;
		}
		if (day >= 241 && day <= 365) {
			rez = vklad * 1.12;
			return rez;
		}
	} else {
		if (vklad > 100000) {
			if (day >= 0 && day <= 30) {
				rez = vklad * 0.9;
				return rez;
			}
			if (day >= 31 && day <= 79) {
				rez = vklad * 1.03;
				return rez;
			}
			if (day >= 80 && day <= 100) {
				rez = vklad * 1.5;
				return rez;
			}
			if (day >= 101 && day <= 120) {
				rez = vklad * 1.03;
				return rez;
			}
			if (day >= 121 && day <= 240) {
				rez = vklad * 1.08;
				return rez;
			}	
			if (day >= 241 && day <= 365) {
				rez = vklad * 1.15;
				return rez;
			}
		} /*else {
		 	return 1;
		}*/
	}
	return 0;
	/*if (i == 1) {
		return 0;
	}*/
}