#include <stdio.h>

int main() {
    int L, D, K, P;

    scanf("%d %d", &L, &D);
    
    scanf("%d %d", &K, &P);

    int custo_por_quilometro = L * K;
    int num_pedagios = L / D;
    int custo_pedagios = num_pedagios * P;
    int custo_total = custo_por_quilometro + custo_pedagios;

    printf("%d\n", custo_total);

    return 0;
}
