#include <stdio.h>
int n;
int input[10000];
int i, j, k;
int possible;

int sort(void){
    int a; 
 
    for (i = 0; i < n; ++i){
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (input[i] > input[j]) 
                {
 
                    a =  input[i];
                    input[i] = input[j];
                    input[j] = a;
 
                }
 
            }
 
        }
    }

    return 0;
}

int main(void){
    int cnt = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &input[i]);
    }

    sort();

    for(i = 0; i < n; i++){
        printf("%d\n", input[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(input[j] % input[i] == 0){
                input[j] = 0;
                possible = 1;
            }
        }

        cnt++;
        for(k = 0; k < n; k++){
            printf("%d\n", input[k]);
        }
    }
    printf("mark1\n");
    
    printf("%d\n", cnt);
    
}