#include <stdio.h>

int rank[3];

int main(void){
    char input[4];
    int insertnum = 0;
    int i;

    for(i = 0; i < 3; i++){
        scanf("%s", input);

        if(input[1] == '<'){
            rank[input[2]-'A']++;
        }
        else{
            rank[input[0]-'A']++;
        }
    }
    
    if(rank[0] == 1 && rank[1] == 1 && rank[2] == 1){
        printf("Impossible\n");
    }
    
    else{
        if(rank[0] == 0){
            printf("A");
        }
        else if(rank[1] == 0){
            printf("B");
        }
        else if(rank[2] == 0){
            printf("C");
        }

        if(rank[0] == 1){
            printf("A");
        }
        else if(rank[1] == 1){
            printf("B");
        }
        else if(rank[2] == 1){
            printf("C");
        }

            
        if(rank[0] == 2){
            printf("A");
        }
        else if(rank[1] == 2){
            printf("B");
        }
        else if(rank[2] == 2){
            printf("C");
        }
    }

    printf("\n");

    return 0;
}