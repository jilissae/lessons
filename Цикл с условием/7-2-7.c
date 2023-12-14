/* Степень двойки
По данном числу N определить, является ли оно степенью числа 2.
	Входные данные:
Одно целое неотрицательное число N.
	Выходные данные:
YES -- если число N является степенью двойки, и NO в противном случае.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, i = 0;
	double k;
	scanf("%d", &N);
	do
	{
		i++;
		k = pow(2, i);
	} while (k < N);
	(N == 1) ? printf("YES") : ((k == N) ? printf("YES") : printf("NO"));
}