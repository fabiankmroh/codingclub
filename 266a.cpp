#include <stdio.h>

int r, g, b;

int main(void){
    int n, i;
    char stone[60];

    scanf("%d", &n);
    scanf("%s", stone);

    for(i = 1; stone[i] != NULL; i++){
        if(stone[i-1] == stone[i]){
            if(stone[i] == 'R'){
                r++;
            }
            if(stone[i] == 'G'){
                g++;
            }
            if(stone[i] == 'B'){
                b++;
            }
        }
    }

    printf("%d\n", r+g+b);
}