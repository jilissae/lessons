/*Напишите программу считающую произведение цифр заданного k-значного числа X.
    Входные данные: Два целых числа.
Первое число k -- количество цифр в числе X. 1≤k≤4
Второе число X. Некоторое k-значное число.
    Выходные данные:
Целое число. Произведение цифр числа X.
*/
// #include <stdio.h>

// int main (void) {
//     int x,x1,x2,x3,x4,k,res;

//     scanf("%d",&k);
//     scanf("%d", &x);
//     switch (k){
//         case 4:
//             x1=x/1000;
//             x2=x/100%10;
//             x3=x%100/10;
//             x4=x%10;
//             printf("%d",res=x1*x2*x3*x4);
//             break;
//         case 3:
//             x1=x/100;
//             x2=x/10%10;
//             x3=x%10;
//             printf("%d",res=x1*x2*x3);

//             break;
//         case 2:
//             x1=x/10;
//             x2=x%10;
//             printf("%d",res=x1*x2);
//             break;
//         case 1:
//             printf("%d",res=x);
//             break;

//     }
// }

#include <stdio.h>

int main() {
  // put your code here
    int k, x1, x2, x3, x4, X=1;
    scanf("%d %1d%1d%1d%1d", &k, &x1, &x2, &x3, &x4);
    printf("%d\n%d %d %d %d\n", k, x1, x2, x3, x4);
    switch (k) {
        case 4: X *= x4;
        case 3: X *= x3;
        case 2: X *= x2;
    }
    
    printf("%d", X*x1);
    
  return 0;
}