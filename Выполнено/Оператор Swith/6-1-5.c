#include <stdio.h>

int main (void) {
	int a,b;
	char c;
	double res;
    
  if (scanf("%d %d %c", &a, &b, &c) == 3){
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
				if (b!=0) {
                    res=(double)a/(double)b;
				printf("%.2lf", res);
				break;
            } else {
		printf("ERROR!");
	}
        }
	}
	else {
		printf("ERROR!");
	}
}
