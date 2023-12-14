/*
Дано натуральное число N. Найти наименьшее натуральное число r, такое, что 2^r≥N.
	Входные данные:
Одно натуральное число N.
	Выходные данные:
Число r.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, r = 0;
	double k;
	scanf("%d", &N);
	do
	{
		r++;
		k = pow(2, r);
	} while (k < N);
	printf("%d", r);
}
