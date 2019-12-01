#include <stdio.h>

int main(void){
    long long num; 
    int tmp;
    int cnt = 0;

    scanf("%lld", &num);
    
    while(num != 0){
        tmp = num % 10;

        if(tmp == 4 || tmp == 7){
            cnt++;
        }

        num /= 10;
    }

    if(cnt == 4 || cnt == 7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}