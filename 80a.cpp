#include <stdio.h>

int isPrime(int num){
    int i;
    if(num == 1){
        return 0;
    }

    for(i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(void){
    int i;
    int n, m;

    scanf("%d %d", &n, &m);

    if(isPrime(m) == 0){
        printf("NO\n");
        return 0;
    }

    for(i = n+1; i < m; i++){
        if(isPrime(i) == 1){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}