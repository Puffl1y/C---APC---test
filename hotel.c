#include <stdio.h>

int calcular_total(int D, int A, int N) {
    int valor_primeira_diaria = D + (N - 1) * A;  
    int dias = 32 - N;                            
    int valor_ultima_diaria = D + (31 - 1) * A;   

   
    int total = dias * (valor_primeira_diaria + valor_ultima_diaria) / 2;
    return total;
}

int main() {
    int D, A, N;

    scanf("%d", &D);
    scanf("%d", &A);
    scanf("%d", &N);

    int total = calcular_total(D, A, N);
    printf("%d\n", total);

    return 0;
}
