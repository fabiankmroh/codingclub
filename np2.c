#include <stdio.h>

int space;
int line;
int j;
int input;

int DiamondPrint(int n){
    space = n/2;

    for(line = 1; line <= n/2+1; line++){
        for(j = 0; j < space; j++){
            printf(" ");
        }
        
        for(j = 1; j <= 2*line-1; j++){
            printf("*");
        }

        printf("\n");
    }

    int save = 2*line-1;
    space = 1;

    for(line = n/2+2; line <= n; line++){
        for(j = 0; j < space; j++){
            printf(" ");
        }

        for(j = 0; j < save; j++){
            printf("*");
        }
        
        printf("\n");

        save -= 2;
        space += 1;
    }

    return 0;
}

int main(void){
    int input;

    scanf("%d", &input);
    DiamondPrint(input);

    return 0;
}