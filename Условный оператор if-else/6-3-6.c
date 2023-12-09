/* Кнопочный механический кодовый замок имеет десять кнопок. Каждая из кнопок имеет свой порядковый номер от 0 до 9. 
Правильный код зашит внутрь замка и состоит из трёх цифр 2,4,8. 
Человек, который хочет открыть дверь, должен последовательно нажать и удерживать эти три кнопки в любом порядке.
Например, сначала зажать 2, потом, не отпуская двойку, нажать 4, потом нажать 8, не отпуская предыдущих двух кнопок. 
Порядок мог бы быть другим. Например, 4->2->8 тоже бы сработало.
Напишите программу, моделирующую работу такого замка.
    Входные данные:
Три целых числа b1, b2, b3 - номера кнопок, которые нажал человек.
    Выходные данные:
Строка open, если введён правильный код. Строка close, если введён неправильный код.
*/

#include <stdio.h> 
int main (void) {
    int b1,b2,b3;
    scanf("%d %d %d", &b1, &b2, &b3);
    (((b1==2)||(b1==4)||(b1==8))&&((b2==2)||(b2==4)||(b2==8))&&((b3==2)||(b3==4)||(b3==8)))?(printf("open")):printf("close");
}