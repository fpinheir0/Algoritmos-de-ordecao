#include <stdio.h>
#include <math.h>
#include <time.h>

void insertionSort(int vetor[], int n){
    int i, chave, j;
    for (i = 1; i < n; i++){
        chave = vetor[i];
        j = i - 1;
    while (j >= 0 && vetor[j] > chave){
        vetor[j + 1] = vetor[j];
        j = j - 1;
    }
        vetor[j + 1] = chave;
    }
}

void imprimeVetor(int vetor[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

//IMPRIMINDO VETORES SETADOS JÁ NO ARRAY
// int main(){
//     int vetor[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(vetor) / sizeof(vetor[0]);
//     insertionSort(vetor, n);
//     imprimeVetor(vetor, n);  
//     return 0;
// }

//IMPRIMINDO VALORES RANDOM ORDENADOS
int main (){
    int n=40000000, i;
    int *vet;
    vet = (int *) malloc(n*sizeof(int));
    srand (time(NULL));
    printf("Quantos valores você deseja gerar:\n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        vet[i] = rand () % 1000;
    printf("vet[%d] = %d\n", i, vet[i]);
    }

    insertionSort(vet, n);
    imprimeVetor(vet, n);
    return 0;
}