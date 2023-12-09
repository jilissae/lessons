/*Определить правильность даты, введенной с клавиатуры (число — от 1 до 31, месяц — от 1 до 12). Если введены некорректные данные, то сообщить об этом.
    Входные данные:
Два целых числа: первое -- число в месяце, второе -- номер месяца в году.
    Выходные данные:
Строка correct, если дата правильная, и строка error, если подобной даты не может быть.
    Уточнение:
Предполагаем, что в феврале 29 дней.
*/

#include <stdio.h>
int main (void) {
    int d,m;
    scanf("%d %d", &d, &m);
    if (m<13) {
        switch (m)
        {
        case 2:
            d>29?printf("error"):printf("correct");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d<31?printf("correct"):printf("error");
            break;
        default:
            d<32?printf("correct"):printf("error");
            break;
        }
    } 
    else printf("error");
}