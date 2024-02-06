#include<stdio.h>
#include<string.h>

#define N 10

int main (void){
    char a[N];
    int count=0, lenght=0;

    fgets(a,N,stdin);
    lenght=strlen(a);

    if ((lenght-1)%3==0){
        for (int i=0;i<lenght;i++){
            if (count%3==0 && count!=0) printf(" ");
            printf("%c", a[i]);
            count++;
        }
    }
    else if ((lenght-1)%3==1){
        printf("%c ", a[0]);
        for (int i=1;i<lenght;i++){
                if (count%3==0 && count!=0) printf(" ");
            printf("%c", a[i]);
            count++;
        }
    }
     else if ((lenght-1)%3==2){
        printf("%c%c ", a[0],a[1]);
        for (int i=2;i<lenght;i++){
                if (count%3==0 && count!=0) printf(" ");
            printf("%c", a[i]);
            count++;
        }
    }
            
    
}




















































// <#include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>
// #include <string.h>

// #define plus 10
// #define TERM_WORD "end"

// int main (void) {
//     char **array;
//     char buffer[10];
//     int size=plus;
//     int length;
//     int count=0;
    
//     array= (char**) malloc(size*sizeof(char*));
//     do{
//         scanf("%s", buffer);
//         if (strcmp(TERM_WORD, buffer) == 0)
//             break;
        
//         length = strlen(buffer);
//         if (length>=size){
//             size+=plus;
//             array=(char**)realloc(array,size*sizeof(char*));
//         }
//         array[length]=(char*)malloc(length+1);
//         strcpy(array[length],buffer);

//     } while(1);

//     for (int i=length;i>=0;i--){
//         if (count%3!=0){
//             printf("%s", array[i]);
//             count++;
//         }
//         else {
//             printf(" %s", array[i]);
//             count++; 
//         }
//     }

//       for (int i = 0; i < length; i++) {
//         free(array[i]);
//         }
//         free(array);
// }>