#include <stdio.h>

int main(void){
    int input;
    int yr, tmp;
    int th, hu, te, on;

    scanf("%d", &input);

    yr = input;

    while(1){
        yr++;

        th = yr / 1000;
        hu = (yr / 100) % 10;
        te = (yr / 10) % 10;
        on = yr % 10;

        if(th != hu && th != te && th != on && hu != te && hu != on && te != on){
            printf("%d\n", yr);
            return 0;
        }

    }
}