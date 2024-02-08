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

        while (a[i] == ' ')
            i++;

        while (a[i] != ' ' && a[i] != '\0')
        {
            temp[j++] = a[i++];
        }
        temp[j] = '\0';
        k = strlen(temp);
        if (k > 1 && a[k - 1] == a[0])
        {
            printf("%s", temp);
            printf(" ");
        }
        j = 0;
    }
}
