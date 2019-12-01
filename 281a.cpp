#include <stdio.h>
#include <string>
#include <cctype>

int main(void){
    char a[1600];
    int i = 0;

    scanf("%s", a);
    a[0] = toupper(a[0]);
    
    for(i = 0; a[i] != NULL; i++){
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}