/* Столбцы
Для заданной матрицы посчитать сумму элементов каждого столбца.
	Входные данные:
Два натуральных числа N и M.
Далее с новой строки N строк по M целых чисел в каждой.
N и M не превышают десяти.
	Выходные данные:
M целых чисел, записанных через пробел.
Первой вывести сумму последнего столбца, второй предпоследнего и т.д.
*/

#include <stdio.h>
int main(void)
{
	int N = 0, M = 0;
	int res = 0;
	scanf("%d %d", &N, &M);
	int a[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int t[M];
	for (int j = 0; j < M; j++)
	{
		res = 0;
		for (int i = 0; i < N; i++)
		{
			res += a[i][j];
		}
		t[j] = res;
	}

	for (int i = M - 1; i >= 0; i--)
	{
		printf("%d ", t[i]);
	}
}