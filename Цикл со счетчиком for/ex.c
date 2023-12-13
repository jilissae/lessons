#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	srand(time(NULL));
	int count_0=0, count_1=0;
	int rand_num;

	for (int i=0; i<=100; i++){
		rand_num = rand()%2;
		// if (rand_num==0) {count_0+=1};
		// else if (rand_num==1) {count_1+=1};		
		switch (rand_num){
			case 0: count_0+=1;break;
			case 1: count_1+=1;break;
		}
	}
	printf("Number of zero is %d\n Number of unit is %d", count_0, count_1);
}