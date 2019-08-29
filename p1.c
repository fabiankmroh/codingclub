#include <stdio.h>

int i, j;
int input;

int main(void){

    scanf("%d", &input);

    for(i = 1; i <= input; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}