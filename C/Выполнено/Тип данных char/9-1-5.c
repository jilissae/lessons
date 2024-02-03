#include <stdio.h>

int main (void){
    int K=0;
    scanf("%d", &K);
    char big, small;
    big=K+64;
    small=big+32;

    printf("%c%c", big,small);
}