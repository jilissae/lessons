/*Вычислить номер дня в невисокосном году по заданным числу и месяцу.
    Входные данные:
Два целых числа. Первое число m - номер месяца. 1≤m≤12
Второе число d - номер дня в месяце. 1≤d≤31
    Выходные данные:
Одно целое число -- порядковый номер дня в невисокосном году.
*/

#include <stdio.h>

// int main (void) {
//     int d, m ,r;
//     scanf("%d %d", &m, &d);

//     switch (m) {
//         case 12:
//             printf("%d",r=334+d);
//             break;
//         case 11:
//             printf("%d",r=304+d);
//             break;
//         case 10:
//             printf("%d",r=273+d);
//             break;
//         case 9:
//             printf("%d",r=243+d);
//             break;
//         case 8:
//             printf("%d",r=212+d);
//             break;
//         case 7:
//             printf("%d",r=181+d);
//             break;
//         case 6:
//             printf("%d",r=151+d);
//             break;
//         case 5:
//             printf("%d",r=120+d);
//             break;
//         case 4:
//             printf("%d",r=90+d);
//             break;
//         case 3:
//             printf("%d",r=59+d);
//             break;
//         case 2:
//             printf("%d",r=31+d);
//             break;
//         case 1:
//             printf("%d", r=d);
//             break;
//     }
// }

int main() {
    int m, d, n=0;
    scanf("%d %d", &m, &d);
    switch(m-1){
        case 11: n+=30;
        case 10: n+=31;
        case 9:  n+=30;
        case 8:  n+=31;
        case 7:  n+=31;
        case 6:  n+=30;
        case 5:  n+=31;
        case 4:  n+=30;
        case 3:  n+=31;
        case 2:  n+=28;
        case 1:  n+=31;
    }
    n+=d;
    printf("%d", n);
    return 0;
}