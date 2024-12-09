#include <stdio.h>
int main() {
    int a[3][5], b[3][5], s[3][5];
    int lin, col;

    for (lin = 0; lin < 3; lin++)
    {
        for ( col = 0; col < 6; col++)
        {
            scanf("%d", &a[lin][col]);
        }
        
    }
    for (lin = 0; lin < 3; lin++)
    {
        for ( col = 0; col < 6; col++)
        {
            scanf("%d", &b[lin][col]);
        }
        
    }

    for (lin = 0; lin < 3; lin++)
    {
        for ( col = 0; col < 6; col++)
        {
            s[lin][col] = a[lin][col] + b[lin][col];
            printf("%d", s[lin][col]);
        }
        
    }
    
    return 0;
}