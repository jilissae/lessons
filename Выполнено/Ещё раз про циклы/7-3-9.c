/*
Напишите программу, которая выводит на экран числа от 1 до 100.
При этом вместо чисел, кратных трем, программа должна выводить слово «Fizz», а вместо чисел, кратных пяти — слово «Buzz».
Если число кратно и 3, и 5, то программа должна выводить слово «FizzBuzz»
*/

// #include <stdio.h>
// int main(void)
// {
// 	int a = 0, sum = 0;
// 	while (a != 0)
// 	{
// 		scanf("%d", &a);
// 	}
// 	scanf("%d", &a);
// 	sum += a;
// 	printf("%d ", a);
// 	while (a != 0)
// 	{
// 		scanf("%d", &a);
// 		sum += a;
// 		printf("%d ", a);
// 	}
// 	printf("%d ", sum);
// }

#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("FizzBuzz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
}