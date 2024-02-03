#include <stdio.h>

int main (void) {
    int K=0;
    scanf("%d", &K);

    for (int i=91-K;i<91;i++){
        printf("%c", i);
    }
}