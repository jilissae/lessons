#include <stdio.h>

int main() {
  char s;
    scanf("%c", &s);
    if ((int)s<=90 && (int)s>=65) s=(int)s+32;
    else s= (int)s-32;
    printf("%c", s);
}