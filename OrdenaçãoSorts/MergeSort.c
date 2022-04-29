#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
// função para ordenar a subseção a[i .. j] do array a[] 
void merge_sort(int esquerda, int direita, int a[], int aux[]) {
    if (direita <= esquerda) {
        return;
// a subseção está vazia ou um único elemento     
    }
    
    int meio = (esquerda + direita) / 2;
// sub-matriz esquerda é a[i .. mid]
// sub-matriz direita é a[mid + 1 .. j]
//=============================================================================================
// ordena a sub-matriz esquerda recursivamente    
    merge_sort(esquerda, meio, a, aux);
// ordena o sub-array direito recursivamente     
    merge_sort(meio + 1, direita, a, aux);    

    int pointer_left = esquerda; // pointer_left aponta para o início da sub-matriz esquerda       
    int pointer_right = meio + 1; // pointer_right aponta para o início da sub-matriz direita
    int k; // k é o contador de loops      

// fazemos um loop de esquerda para direita para preencher cada elemento do array mesclado final
    for (k = esquerda; k <= direita; k++) {
        if (pointer_left == meio + 1) { // ponteiro esquerdo atingiu o limite
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == direita + 1) { //ponteiro direito atingiu o limite
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) { // ponteiro para a esquerda aponta para o elemento menor
            aux[k] = a[pointer_left];
            pointer_left++;
        } else { // ponteiro direito aponta para o elemento menor    
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }
// copia os elementos de aux[ ] para a[ ]
    for (k = esquerda; k <= direita; k++) {     
        a[k] = aux[k];
    }
}


int main() {
    int aux[100], n=40000000, i, d, swap;
    int *vet;
    vet = (int *) malloc(n*sizeof(int));
 
        printf("\nEntre com a quantidade de elementos:  ");
        scanf("%d", &n);
    for (i = 0; i < n; i++){
        vet[i] = rand() % 1000;
        printf("vet[%d] = %d\n", i, vet[i]);
    }
        merge_sort(0, n - 1, vet, aux);

        printf("Valores do array ordenado:");
 
        for (i = 0; i < n; i++)
        printf("%d ", vet[i]);
 
  return 0;
}