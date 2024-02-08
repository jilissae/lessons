#include<stdio.h>
#include<stdlib.h>

#define N 100

int main (void) {
    char a[N];
    int count=0;
    fgets(a,N,stdin);

    for (int i=0;i<N;i++){
        if (a[i]!=' ' && ( a[i+1]==' ' || a[i+1]=='\n')) count++;  
    }
    printf("%d", count);
}