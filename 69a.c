#include <stdio.h>

int x, y, z;
int xadd, yadd, zadd;

int main(void){
    int line;
    int i;

    scanf("%d", &line);
    
    for(i = 0; i < line; i++){
        scanf("%d %d %d", &x, &y, &z);
        xadd += x;
        yadd += y;
        zadd += z;
    }

    if(xadd == 0 && yadd == 0 && zadd == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}