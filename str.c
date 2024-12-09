#include <stdio.h>

int main(){
    int tam;
    char c;
    scanf("%c", &c);
    while (c!='\n')
    {
        tam++;
        scanf("%c", &c);
    }
    printf("%d\n", tam);

    return 0;
}