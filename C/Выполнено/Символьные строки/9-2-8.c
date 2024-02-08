#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main (void) {
    char a[N];
    const char s[4]={'~'};
    char* res;
    int i1=-1,i2=-1;

    fgets(a,N,stdin);

    for (int i=0;i<N;i++){
        if (a[i]=='/' && a[i+1]=='*' && a[i+2]=='/' ) continue;
        else{
            if (a[i]=='/' && a[i+1]=='*') i1=i;
            if (a[i]=='*' && a[i+1]=='/') i2=i+1;
        }
    }

    if ((i1>-1 && i2>-1)&& i2>i1) {
        for (int i=i1; i<=i2; i++)
        a[i]='~';
    }

    res = strtok(a,s);
    while (res !=0) 
    {
        printf("%s", res);
        res = strtok(0, s);
    }


}