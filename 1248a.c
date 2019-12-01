#include <stdio.h>
#define NUM   1000000000

long long int entiretestcasen;
long long int testcasen;
long long int input;

long long int xnum; // # of DLS lines
long long  int xeven;
long long int xodd;

long long int mnum;
long long int meven;
long long int modd;

long int i;

int function(void){
    xeven = 0;
    xodd = 0;
    
    meven = 0;
    modd = 0;

    // scan DLS lines
    scanf("%lld", &xnum);
    for(i = 0; i < xnum; i++){
        scanf("%lld", &input);
        
        if(input % 2 == 0){
            xeven++;
        }
        else if(input % 2 == 1){
            xodd++;
        }
    }

    // scan JLS lines
    scanf("%lld", &mnum);
    for(i = 0; i < mnum; i++){
        scanf("%lld", &input);

        if(input % 2 == 0){
            meven++;
        }
        else if(input % 2 == 1){
            modd++;
        }
    }

    printf("%lld\n", (xodd * modd)+(xeven*meven));

    return 0;
}

int main(void){
    scanf("%lld", &entiretestcasen);

    for(long int count = 0; count < entiretestcasen; count++){
        function();
    }

    return 0;
}

