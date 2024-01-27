/* Змейка
Для заданных чисел M и N сформировать матрицу, заполненную по спирали числами от 1 до M⋅N.
    Входные данные:
Два натуральных числа M и N. M и N не превышают 10.
    Выходные данные:
Вывести на экран массив M на N, указанного вида. Формат вывода каждого числа 3 знака на число, выравнивание по правому краю.
*/

#include <stdio.h>

int main (void){
    int M=0,N=0;
    scanf("%d %d", &M, &N);
    int a[M][N], b=1;

    int iS=0, jS=0, iB=0, jB=0;
    int i=0, j=0;

    while (b<=N*M){

        a[i][j]=b;
        if (i==iS && j<N-jB-1) j++;
        else if (j==N-jB-1 && i<M-iB-1) i++;
        else if (i==M-iB-1 && j>jS) j--;
        else i--;

        if (i==iS+1 && j==jS && jS!=N-jB-1) {
            iS++;
            jS++;
            iB++;
            jB++;
        }
        b++;

    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

}
  