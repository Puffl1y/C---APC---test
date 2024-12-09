#include <stdio.h>
int main(){
    int m[3][4] = {12, 45, 67, 88, 
                   32, 56, 44, 23, 
                   78, 56, 33, 89};
    int t[4][3];
    for (int l = 0; l< 4; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            t[l][c] = m[c][l];
           printf("%d", m[c][l]);
        }
        printf("\n");
    }
    
    return 0;
}