#include <stdio.h>

int n, k, i;
int w[10000];
int v[10000];
int u[10000];
int max = -10000;
int status;

void f(int accuW, int accuV, int i){
    status = 0;

    for(i = 0; i < n; i++){
        if(accuW+w[i] <= k && u[i] == 0){
            status = 1;
            u[i] = 1;
            f(accuW+w[i], accuV+v[i], i);
        }
    }
    

    if(status == 0){
        if(accuV > max){
            max = accuV;
        }
        
        return;
    }
}

int main(void){
    scanf("%d %d", &n, &k);

    for(i = 0; i < n; i++){
        scanf("%d %d", &w[i], &v[i]);
    }

    f(0,0,0);

    printf("%d\n", max);
}
