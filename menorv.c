#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    int menor = v[0];
    int im = 0;
    for(int i= 1; i<n; i++){
            if(menor > v[i]){
            menor = v[i];
            im = i;
            }
    }
    printf("%d\n", im);

    return 0;
}