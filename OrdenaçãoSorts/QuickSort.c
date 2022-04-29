#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void quick_sort(int vet[],int menor,int maior){
  
    int tempo ,esquerda, direita, x, k;
    if(menor>=maior)
    return;
    else{
        x=vet[menor];
        direita = menor+1;
        esquerda = maior;
        while(direita <= esquerda){
        while(vet[direita]<x && direita  <= direita){
    direita ++;
  }
        while(vet[esquerda]>x && esquerda >  menor){
    esquerda--;
  }
    if(direita<esquerda){
        tempo=vet[direita];
        vet[direita]=vet[esquerda];
        vet[esquerda]=tempo;
    direita++;
    esquerda--;
    }
  }
    vet[menor]=vet[esquerda];
    vet[esquerda]=x;
    quick_sort(vet,menor,esquerda-1);
    quick_sort(vet,esquerda+1,maior);
  }
}

int  main(){
    int l, r, i, n=4000;
    int *vet;
    vet = (int *) malloc(n*sizeof(int));  
        srand (time(NULL));
          
          printf("\nEntre com a quantidade de elementos:  ");
          scanf(" %d",&n);
            for(i = 0; i < n; i++){
            vet[i] = rand() % 1000;
            printf("vet[%d] = %d\n", i, vet[i]);
            }
          l=0; r=n-1;
            quick_sort(vet, l, r);
            printf("\n Valores do array ordenado:  ");
        for(i = 0; i < n; i++)
            printf(" %d",vet[i]);
            printf("\n");
      return 0;
  }

