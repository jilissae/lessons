#include <stdio.h>

int main(void){
    char word[8];
    int step,x=0,y=0,N,k;


    scanf("%d", &N);
    for (int i=0;i<N;i++){
        scanf("%s %d", word, &step);
        if (word[0]=='N') k=1;
        else if (word[0]=='S') k=2;
        else if (word[0]=='W') k=3;
        else if (word[0]=='E') k=4;

        switch (k)
        {
        case 1:
            x+=step;
            break;
        case 2:
            x-=step;
            break;
        case 3:
            y-=step;
            break;
        case 4:
            y+=step;
            break;
        }

    }

    printf("%d %d", y,x );


}