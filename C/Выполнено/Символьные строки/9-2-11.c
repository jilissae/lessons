#include <stdio.h>
#include <string.h>
#define N 120

int main(void)
{
    char a[N], temp[N];
    int i = 0, j = 0, k = 0;
    fgets(a, N, stdin);

    while (a[i] != '\0')
    {

        while (a[i] == ' ' || a[i]=='\n')
            i++;

        while (a[i] != ' ' && a[i] != '\0' && a[i]!='\n')
        {
            temp[j++] = a[i++];
        }
        temp[j] = '\0';
        k = strlen(temp);
        if (k > 1 && temp[k - 1] == temp[0])
        {
            printf("%s", temp);
            printf(" ");
        }
        j = 0;
    }
}

