#include<stdio.h>
#include<string.h>

#define N 120

int main (void){
    char a[N],temp[N];
    int i=0,j=0,k=0;
    fgets(a,N,stdin);

    while (a[i]!='\0')
    {
       while (a[i]==' ' || a[i]=='\n') i++;

       while (a[i]!=' ' && a[i]!='\n' && a[i]!='\0') temp[j++]=a[i++];
    
        temp[j]='\0';
        k=strlen(temp);

        for (int l=k-1; l>=0; l--){
            printf("%c", temp[l]);
        }
        printf(" ");
        j=0;
       
    }
    
}

//sI ur.redoCgnuoY a doog ?etis