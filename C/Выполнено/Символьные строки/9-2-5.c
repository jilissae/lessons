#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100

int main (void){
    char a[N];
    const char s[4]={' '};
    char* res;
    fgets(a,N,stdin);

    res = strtok(a,s);

    while (res !=0) 
    {
        printf("%s ", res);
        res = strtok(0, s);
    }
    
}