#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

int main (void){
    char a[N];
    int K=0;
    fgets(a, N, stdin );
    K=strlen(a);
    printf("%d", K);
}