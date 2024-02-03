#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

int main (void) {
    char a[N];
    double res=0;
    int lenght=0;

    fgets(a,N,stdin);
    for (int i=0;i<N;i++){
        if (a[i]=='1' || a[i]=='0') lenght++;
    }
    printf("%d\n", lenght);

    int count=lenght-1;

    for (int i=0;i<N;i++){
        a[i]=(int)a[i]%48;
         }

    //
    for (int i=0;i<N;i++)
    {
       if (a[i]==1){
       res+=(pow(2,count));
       }
       count--;
    }
    

    printf("%d", (int)res);
}

// void pow(couu) {
//     for 
// }

/*
long int read_long(void)
{
  char start[80], *end;
  printf("Введите число: ");
  gets(start);
  return strtol(start, &end, 10);
}
*/