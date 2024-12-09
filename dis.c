#include <stdio.h>

int main() {
    int Xm, Ym, Xr, Yr;
    
    scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);

    if (Xm == Xr || Ym == Yr) {
        printf("1\n");  
    } else {
        printf("2\n"); 
    }

    return 0;
}
