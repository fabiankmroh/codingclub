#include <stdio.h>

int length;
int array[10000];
int maxS[10000];
int i, tmp;
int max = -10000;

int main(void){

    scanf("%d", &length);

    for(i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    maxS[0] = array[0]; 
    for(i = 1; i < length; i++){
        tmp = array[i] + maxS[i-1];

        if(tmp < array[i]){
            maxS[i] = array[i];
        }
        else{
            maxS[i] = tmp;
        }
    }

    for(i = 0; i < length; i++){
        if(maxS[i] > max)
            max = maxS[i];
    }

    printf("%d\n", max);
}