/*В выражении a/b*c/d*e/f*h расставить скобки так, чтобы выражению со скобками соответствовала дробь.
Входные данные: семь целых чисел a,b,c,d,e,f и h соответственно. Выходные данные: результат выражения. Точность  2 знака после запятой.*/

#include <stdio.h>
#include <math.h>

int main (void) {
	int a,b,c,d,e,f,h;
	double res;
	scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&h);
	res =(double)(a*d*e)/(double)(b*c*f*h);
	printf("%.2lf", res);
}