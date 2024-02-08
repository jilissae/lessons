#include <stdio.h>
#include <string.h>

#define N 20

int main (void){
    char a[N];
    int count=0, lenght, error=0;
    fgets(a,N,stdin);

    lenght=strlen(a);
    for (int i=0;i<lenght;i++){
        if (strchr("1234567890+-.\n\0",a[i])!=NULL) {
            if (a[0]=='.') {
                printf("error");
                error=1;
                break;}
            else if (a[lenght-2]=='.') {
                printf("error");
                error=1;
                break;}
            else if (a[i]=='.') count++;
            else if ((a[i]=='+' || a[i]=='-')&&(i!=0))
            {
                printf("error");
                error=1;
                break;}  
        }
        else {
             printf("error");
                error=1;
                break;}
        

    }

    if (count==0 && error==0) printf("int");
    else if (count==1 && error==0) printf("float");
    else if (count>1) printf("error");
}
    
