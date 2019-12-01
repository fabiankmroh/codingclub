#include <stdio.h>

int input[10000];
int joongbok[11];
int location[11][10000];
int size;
int i, j, tmp;
int oS = 10000, tS;
int oE = 0, tE;

int main(void){
    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &input[i]);
    }

    for(i = 0; i < size; i++){
        joongbok[input[i]]++;
    }

    for(i = 0; i < size; i++){
        if(joongbok[input[i]] > 1){
            location[input[i]][i] = 1;
        }
    }

    for(i = 1; i <= 10; i++){

        for(j = 0; j < size; j++){
            if(location[i][j] == 1 && j < oS){
                tmp = oS;
                oS = j;
                tS = tmp;
            }
            if(location[i][j] == 1 && oS < j && j < tS){
                tS = j;
            }
            if(location[i][j] == 1 && j > oE){
                tmp = oE;
                oE = j;
                tE = tmp;
            }
            if(location[i][j] == 1 && oE > j && j > tE){
                tE = j;
            }
        }

    }
    printf("%d %d %d %d\n", oS, tS, tE, oE);

    if(tS > tE){
        printf("%d\n", oE-oS+1);
        return 0;
    }
    printf("%d\n", tE-tS+1);
}