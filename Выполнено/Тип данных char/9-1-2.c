#include <stdio.h>
int main (void){
    char s,s1,s2;
    scanf("%c", &s);
    s1=(int)s-1;
    s2=(int)s+1;
    printf("%c %c", s1, s2);
}