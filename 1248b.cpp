#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
    long long int arr[100000];
    long long int inputn;
    long long int i;
    long long int hor = 0;
    long long int ver = 0;

    scanf("%lld", &inputn);

    for(i = 0; i < inputn; i++){
        scanf("%lld", &arr[i]);
    }

    sort(arr, arr+inputn);

    for(i = inputn-1; i > inputn/2-1; i--){
        hor = hor + arr[i];
    }

    for(; i >= 0; i--){
        ver = ver + arr[i];
    }

    printf("%lld\n", (long long int) (pow(hor, 2) + pow(ver, 2)));

    return 0;
}