#include <stdio.h>
#include <conio.h>
#include <time.h>
  
void selectionSort(int v[], int n){
    int i, j, troca, min;
    for(i = 0; i < n-1; i++){
        min = i;
        for(j = i+1; j < n; j++){
            if(v[j] < v[min]){
            min = j;
        }
    }
            troca = v[i]; v[i] = v[min]; v[min] = troca; 
    }
}
//GERANDO DE FORMA CORRETA PORÉM COM USER DANDO INPUT COM NUMEROS
//===========================================================================
    // int main(){
    //     int v[200], n, i;
    //         printf("Quantos valores você deseja gerar:\n\n");
    //         scanf("%d", &n);
    //         printf("Entre os %d elementos do vetor:\n", n);
    //     for(i = 0; i < n; i++) {
    //         scanf("%d", &v[i]);
    //     }
    //     selectionSort(v, n);
    //         printf("\n\nVetor ordenado:\n");
    //         for(i = 0; i < n; i++) {
    //             printf("%d\t", v[i]);
    //         }
    //         printf("\n");
    //         return 0;
    // }
//===========================================================================

//FAZENDO COM QUE GERE NÚMEROS AUTOMATICOS COM A FUNÇÃO RAND
//===========================================================================
int main(){
    int n=40000000, i;
    int *vet;
    vet = (int *) malloc(n*sizeof(int));
    // srand (time(NULL));
        printf("Quantos valores voce deseja gerar:\n\n");
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
        vet[i] = rand() % 100;
    printf("vet[%d] = %d\n", i, vet[i]);
    }
    selectionSort(vet, n);
        printf("\n\nVetor ordenado:\n");
        for(i = 0; i < n; i++) {
            printf("%d\n", vet[i]);
        }
        printf("\n");
        return 0;
}

