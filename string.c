#include <stdio.h>

int main() {
    char palavra[16], frase[101];
    scanf("%s", palavra);
    scanf(" %[^\n]", frase);

    printf("%s\n", palavra);
    printf("%s\n", frase);

    return 0;
}