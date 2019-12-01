#include <stdio.h>
int divisible[100];

int gcd(int a, int b){
    int c;
    
    while ( a != 0 ) {
        c = a; 
        a = b % a;  
        b = c;
    }

    return b;
}

int main(void){
    int n, i, j;
    int input[100];
    int colorcnt = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &input[i]);
    }

    if(gcd(input[0], input[1]) != 0 && gcd(input[0], input[1]) != 1){
        divisible[gcd(input[0], input[1])]++;
    }

    for(i = 2; i < n; i++){
        for(j = 2; j < input[i]; j++){
            if(input[i] % divisible[j] == 0){
                continue;
            }
            
            divisible[input[i]]++;
        }
    }

    for(i = 0; i < 100; i++){
        if(divisible[i] > 0){
            colorcnt++;
        }
    }

    printf("%d\n", colorcnt);
}