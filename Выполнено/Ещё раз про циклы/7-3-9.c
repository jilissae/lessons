#include <stdio.h>
int main(void)
{
	int a = 0, sum = 0;
	while (a != 0)
	{
		scanf("%d", &a);
	}
	scanf("%d", &a);
	sum += a;
	printf("%d ", a);
	while (a != 0)
	{
		scanf("%d", &a);
		sum += a;
		printf("%d ", a);
	}
	printf("%d ", sum);
}