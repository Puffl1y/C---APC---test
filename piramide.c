#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for(int l=1; l<=n; l++){
        for (int i=1; i <=(n-l); i++){
        printf(" ");
        }
        for(int i=1; i<=(i<2*l-1); i++){
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}