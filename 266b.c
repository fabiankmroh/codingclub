#include <stdio.h>

int main(void){
    char s[55];
    int i, time, person; 

    scanf("%d %d", &person, &time);
    scanf("%s", s);

    while(time--){
        for(i = 1; i < person; i++){
            if(s[i-1] == 'B' && s[i] == 'G'){
                s[i-1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
    }

    for(i = 0; i < person; i++){
        printf("%c", s[i]);
    }

    printf("\n");
    return 0;
}