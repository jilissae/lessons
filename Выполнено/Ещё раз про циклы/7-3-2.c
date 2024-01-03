/* Пирамида.
Вывести на экран пирамиду из чисел.
	ходные данные:
Одно целое число N.
	Выходные данные:
Пирамида из натуральных чисел высоты N
*/

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			while (j <= i)
			{
				printf("%d ", j);
				break;
			}
		}
		printf("\n");
	}
}