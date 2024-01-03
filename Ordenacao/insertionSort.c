#include <stdio.h>
#include <stdlib.h>

int insertionSort(int *v, int tam){
  int i, j, aux;

  for(i = 1; i < tam; i++){
    aux = v[i]; // menor = v[0];

    j = i;
      
    while(j > 0 && v[j+1] < aux){
      v[j] = v[j-1];
      j--;
    }
    v[j] = aux;
  }
}

int main(){ 
  int vet[] = {1,5,4,3,7,6,2};
  int tam = 7;

  printf("Vetor Desordenado\n");
  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  insertionSort(vet, tam);

  printf("\nVetor Ordenado\n");

  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  printf("\n");
  
  return 0;
}