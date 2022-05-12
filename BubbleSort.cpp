#include <stdio.h>

void bubble(int vet[], int n){
    int t, tr;
    
    for (int i = n - 1; i > 0; i--) {

        for (int j = 0; j < i; j++) {

            if (vet[j] > vet[j + 1]) {
                t = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = t;
            }
        }
    }
    
}

int main(){
    int vet[6] = {1, 3, 8, 4, 6, 2};
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        printf("\n[%d] = %d", i, vet[i]);
    }

    printf("\n\n");
    
    
    bubble(vet, n);

    for (int i = 0; i < n; i++)
    {
        printf("\n[%d] = %d", i, vet[i]);
    }
    

    return 0;
}