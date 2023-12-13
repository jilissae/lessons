/*Напишите программу-калькулятор для четырёх основных арифметических действий.
	Входные данные:
Символ действия c и два целых числа a, b(b!=0)
	Выходные данные:
Одно вещественное число, либо строку ERROR!, если введено недопустимое действие. Формат вывода чисел: два знака после запятой.
*/
#include <stdio.h>

int main (void) {
	int a,b;
	char c;
	double res;

	scanf("%c %d %d", &c, &a, &b);
  if (((c=='+')||(c=='-')||(c=='*')||(c=='/'))&&(((a<=0)||(a>0))&&(b!=0))){
		switch(c){
			default:
				printf("ERROR!");break;
			case '+':
				res=(double)a+(double)b;
				printf("%.2lf", res);
				break;
			case '-':
				res=(double)a-(double)b;
				printf("%.2lf", res);
				break;
			case '*':
				res=(double)a*(double)b;
				printf("%.2lf", res);
				break;
			case '/':
				res=(double)a-(double)b;
				printf("%.2lf", res);
				break;
    }
	}
	else {
		printf("ERROR!");
	}
	}