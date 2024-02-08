#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 15

int main (void){
    char a[N]={0},b[N]={0};
    fgets(a,N,stdin);
    fgets(b,N,stdin);
    int lenght = strlen(a);
    int count=0;

    for (int i=0;i<lenght;i++){
        if (a[i]!=b[i]) {
            count++;
        }
    }

    printf("%d", count);
}