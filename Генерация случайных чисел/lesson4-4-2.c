//Поле для игры в рулетку состоит из ячеек от 0 до N.  На вход программе подаётся одно натуральное число N.
//Программа должна выдать случайное число от нуля до N включительно.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
int N;
scanf("%d", &N);
srand(time (NULL));
int random= rand()%(N+1);
printf("%d", random);
}