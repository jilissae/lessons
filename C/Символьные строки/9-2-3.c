#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main (void) {
    char s;
    scanf("%c ", &s);

    char a[N];
    int c=0;
    fgets(a,N,stdin);
    
    for (int i=0;i<N;i++){
        if (a[i]==s){
            c++;
            printf("%d", i);
            break;
        }

    }
        if (c==0) printf("-1");
}