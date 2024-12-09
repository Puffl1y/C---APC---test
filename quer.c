#include <stdio.h>

int main(){
    int n, ingresso, vencedor=0;
    scanf("%d", &n);
    for(int i=l; i<=n; i++){
        scanf("%d", &ingresso);
        if(ingresso == i){
            printf("%d\n", ingresso);
            if (vencedor==0 && ingresso ==i){
                vencedor = ingresso;
            }
        }
    }
        printf("%d\n, vencedor");
    f--;

    return 0;
}