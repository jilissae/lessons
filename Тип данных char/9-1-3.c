#include <stdio.h>
int main (void) {
    int N, count=0;
    scanf("%d", &N);

    char a[N], temp;
    for (int i=0;i<N;) {
        temp=getchar();
        if (temp!=' ' && temp!='\n') a[i++]=temp;
    }
    for (int i=0;i<N;i++) {
        printf("%c ", a[i]);
    }

    for (int j=65;j<91;j++){
        count=0;
        for (int i=0;i<N;i++) {
            if (j==(int)a[i] || j+32==(int)a[i]) count++;
        
        }
        printf("%d", count);
    } 
}