#include <stdio.h>

int main(void){
    int i;
    int add = 0;

    scanf("%d", &i);

    while(i > 0){
        add = add + i % 10;
        i /= 10;
    }

    printf("%d\n", add);
}