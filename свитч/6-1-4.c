#include <stdio.h>

int main (void) {
	int a,b;
	char c;
	double res;
    scanf("%c", &c);
  if (scanf("%d %d", &a, &b) == 2 && (b!=0)){
		switch(c) {
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
				res=(double)a/(double)b;
				printf("%.2lf", res);
				break;
    }
	}
	else {
		printf("ERROR!");
	}
	}

    