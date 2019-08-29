#include <stdio.h>

int main(void){
    int n;
    int i, j;
    int space;

    scanf("%d", &n);

    space = n/2;

    for(i = 0; i < n/2+1; i++){
        for(j = 0; j < space; j++){
            printf(" ");
        }

        for(j = 0; j < 2*i+1; j++){
            printf("*");
        }

        space--;
        printf("\n");
    }

    i-=2;
    space+=2;

    for(;i >= 0; i--){
        for(j = 0; j < space; j++){
            printf(" ");
        }

        for(j = 0; j < 2*i+1; j++){
            printf("*");
        }

        space++;
        printf("\n");
    }
}