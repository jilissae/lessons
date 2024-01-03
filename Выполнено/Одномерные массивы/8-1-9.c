/*
В заданном массиве поменять местами наибольший и наименьший элементы.
	Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива не более 100 элементов.
Вторая строка N  натуральных чисел, записанных через пробел.
	Выходные данные:
Новый массив, в котором на месте минимума(ов) стоит максимум, а на месте максимума(ов) стоит минимум.
Остальные элементы массива остаются на прежних местах.
*/

#include <stdio.h>
int main(void)
{
	int N = 0;
	scanf("%d", &N);

	int a[N];
	scanf("%d", &a[0]);
	int max = a[0], min = a[0];

	for (int i = 1; i < N; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (a[i] == min)
			a[i] = max;
		else if (a[i] == max)
			a[i] = min;
		printf("%d ", a[i]);
	}
}