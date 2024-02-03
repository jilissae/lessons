//На вход программе подаётся два числа S и E, записанных через пробел. При этом гарантируется, что S≤E. Программа должна выводить одно случайное число из промежутка [S;E]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int S,E;
    scanf("%d %d", &S, &E);
    srand(time(NULL));
    int random = S+rand()%(S-E+1);
    printf("%d", random);
}
