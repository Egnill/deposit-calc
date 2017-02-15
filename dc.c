#include <stdio.h>

int main()
{
	int day;
	float vklad;
	
	printf("Введите сумму вклада(в т.р) и срок вклада: ");
	scanf("%f%d", &vklad, &day);
	
	if (vklad <= 100) {
		if (day <= 0 && day <= 30) {
			}
		if (day <= 31 && day <= 120) {
			}
		if (day <= 121 && day <= 240) {
			}
		if (day <= 241 && day <= 365) {
			}
	} else {
		if (vklad >= 100) {
			if (day <= 0 && day <= 30) {
				}
			if (day <= 31 && day <= 120) {
				}
			if (day <= 121 && day <= 240) {
				}
			if (day <= 241 && day <= 365) {
				}
		}
	}
	
	return 0;
}