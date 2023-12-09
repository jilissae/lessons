/*Для целого числа K (от 1 до 99 включительно) напечатать фразу «Мне K лет», 
учитывая при этом, что при некоторых значениях K слово «лет» надо заменить на слово «год» или «года». 
Например, 11 лет, 22 года, 51 год.
    Входные данные: Одно целое число 1≤k≤99
    Выходные данные: Фраза с правильным окончанием
*/
#include <stdio.h>
#include <locale.h>

int main (void) {
    int K;
    setlocale(LC_ALL,"");
    scanf("%d",&K);
    switch (K%10){
        default:
            printf("Мне %d лет", K);
            break;
        case 1:
            switch (K){
                default:
                printf("Мне %d год", K);
                break;
                case 11:
                printf("Мне %d лет", K);
                break;
            }
            break;
        case 2:
            switch (K){
                default:
                printf("Мне %d года", K);
                break;
                case 12:
                printf("Мне %d лет", K);
                break;
            }
            break;
        case 3:
            switch (K){
                default:
                printf("Мне %d года", K);
                break;
                case 13:
                printf("Мне %d лет", K);
                break;
            }
            break;
        case 4:
            switch (K){
                default:
                printf("Мне %d года", K);
                break;
                case 14:
                printf("Мне %d лет", K);
                break;
            }
            break;
        
    }
    
}