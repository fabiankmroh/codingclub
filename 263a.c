#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j;
    int input;

    for(i = 1; i <= 5; ++i){
        for(j = 1; j <= 5; ++j){
            scanf("%d", &input);

            if(input == 1){
                printf("%d\n", abs(i-3) + abs(j-3));

                return 0;
            }
        }
    }
}