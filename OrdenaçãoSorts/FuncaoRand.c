#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
int i, n=100, vet[n];
srand (time(NULL));
    for(i=0;i<n;i++){
        vet[i] = rand() % n;
        
        printf("vet[%d] = %d\n", i, vet[i]);
    }
    for(i=0;i<n;i++){
        printf("%d, ",vet[i]);
    }
    
return 0;
    
}