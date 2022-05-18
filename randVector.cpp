#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int *vet, int k, time_t ti, time_t tf){
    int t;
    double tempo;
    
    ti = time(NULL);

    for (int i = k - 1; i > 0; i--) {

        for (int j = 0; j < i; j++) {

            if (vet[j] > vet[j + 1]) {
                t = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = t;
            }
        }
    }

    tf = time(NULL);

    tempo = difftime(tf, ti);
    printf("Tempo de execucao: [%.2lf] \n", tempo);
}

void InsertionSort(int *vet, int k, time_t ti, time_t tf){
    int key, aux;
    double tempo;

    ti = time(NULL);

        for (int i = 1; i < k; i++) {
            
            key = vet[i];
            aux = i - 1;

            while (aux >= 0 && vet[aux] > key) {
                vet[aux + 1] = vet[aux];
                aux = aux - 1;
        }

            vet[aux + 1] = key;
     } 
    
    tf = time(NULL);

    tempo = tf - ti;
    printf("Tempo de execucao: [%.2lf] \n", tempo);
}

void MergeSort(){
    
}

void QuickSort(){

}

void SelectionSort(){

}

int main()
{
	time_t ti, tf;
    int k, *vet, s;


	printf("Tamanho do vetor: ");
	scanf("%i", &k);

	vet = (int *)malloc(k * sizeof(int));

    srand(time(NULL));

	for (int i = 0; i < k; i++)
	{
		vet[i] = rand() % k + 1;
	}

    system("clear");

    printf(" Seu vetor está pronto! \n\n Escolha um método de ordenação!");
    printf("\n 1- BubbleSort. \n 2- InsertionSort \n 3- MergeSort \n 4- QuickSort \n 5- SelectionSort \n ->");
    scanf("%d", &s);

    
    if(s != 5){

        switch (s)
        {
        case 1:
            BubbleSort(vet, k, ti, tf);
            break;
        case 2: 
            InsertionSort(vet, k, ti, tf);
            break;
        case 3: 
            MergeSort();
            break;
        case 4:
            QuickSort();
            break;
        case 5:
            SelectionSort();
            break;
        }
    }
}