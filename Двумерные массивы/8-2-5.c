/* Диагонали
Для заданной квадратной матрицы A[N][N] посчитать следующие величины:
	- произведение элементов, стоящих на главной диагонали
	- произведение элементов, стоящих на побочной диагонали
	Входные данные:
Одно натуральное число N. Далее с новой строки N строк по N целых чисел в каждой. N не превышают десяти.
	Выходные данные:
Два целых числа, записанных через пробел. Первым вывести большее из чисел.
*/

#include <stdio.h>
int main(void)
{

	int N = 0;
	scanf("%d", &N);
	int a[N][N], res1 = 1, res2 = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				res1 *= a[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j + 1 == N)
				res2 *= a[i][j];
		}
	}

	if (res1 < res2)
		printf("%d %d", res2, res1);
	else
		printf("%d %d", res1, res2);
}