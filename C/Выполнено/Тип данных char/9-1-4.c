#include <stdio.h>

int main (void) {
    char symbol;
    scanf("%c", &symbol);

    if ((int)symbol>47 && (int)symbol<58) printf("digit");
    else if ((int)symbol>64 && (int)symbol<91) printf("en");
    else if ((int)symbol>96 && (int)symbol<123) printf("en");
    else printf("error");
}