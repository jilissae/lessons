#include <stdio.h> 

int main(void){
	
    int age, height, weight;
    char sex;
    double bov_m, bov_f;
  
    scanf("%c", &sex);
    scanf("%d", &age); // считываем целое значение в переменную age
    scanf("%d", &height); // считываем  значение в переменную height
    scanf("%d", &weight); // считываем значение в переменную weight
    switch (sex) {
        default:
            printf("ERROR!");
            break;
        case 'f':
            bov_f = 10*weight + 6.25*height - 5*age - 161;
            printf("|  BMR  |\n");
            printf("|%7.2f|\n",bov_f);
            break;
        case 'm':
            bov_m = 10*weight + 6.25*height - 5*age + 5;
            printf("|  BMR  |\n");
            printf("|%7.2f|\n",bov_m);
            break;
    }
	
  return 0;
}