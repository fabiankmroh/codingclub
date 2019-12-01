#include <stdio.h>

int main(void){
    char s[205];
    int i;

    scanf("%s", s);

    for(i = 0; s[i] != NULL; i++){
        if(s[i] == '.'){
            printf("0");
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            printf("2");
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            printf("1");
            i++;
        }
    }

    printf("\n");
    return 0;
}