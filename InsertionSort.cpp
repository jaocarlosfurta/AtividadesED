#include <stdio.h>


void Insertion(int vet[], int n){
    int key, aux;
        
        for (int i = 1; i < n; i++) {
            
            key = vet[i];
            aux = i - 1;

            while (aux >= 0 && vet[aux] > key) {
                vet[aux + 1] = vet[aux];
                aux = aux - 1;
        }

            vet[aux + 1] = key;
    }
}


int main(){
    int vet[6] = {1, 15, 200, 34, 69, 2};
    int n = 6;

        for (int i = 0; i < n; i++){

            printf("\n[%d] = %d", i, vet[i]);

        }

        printf("\n\n");
    
    
        Insertion(vet, n);

        for (int i = 0; i < n; i++){

            printf("\n[%d] = %d", i, vet[i]);

        }
    
    return 0;
}