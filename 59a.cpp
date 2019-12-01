#include <stdio.h>
#include <string>
#include <cctype>

// ASCII A~Z 65~90
// ASCII a~z 97~122

char input[105];
int big = 0;
int small = 0;
int i;

int main(void){
    scanf("%s", input);

    i = 0;

    while(input[i] != NULL){
        if(64 < input[i] && input[i] < 91){
            big++;
        }
        else if(96 < input[i] && input[i] < 123){
            small++;
        }

        i++;
    }

    i = 0;
    
    if(big > small){
        while(input[i] != NULL){
            input[i] = toupper(input[i]);
            i++;
        }
    }
    else if(small >= big){
        while(input[i] != NULL){
            input[i] = tolower(input[i]);
            i++;
        }
    }

    i = 0;
    while(input[i] != NULL){
        printf("%c", input[i]);
        i++;
    }
    printf("\n");

    return 0;
}