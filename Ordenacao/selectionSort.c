#include <stdio.h>
#include <stdlib.h>

int selectionSort(int *v, int tam){
  int i, j, menor, aux;

  for(i = 0; i < tam - 1; i++){
    menor = i; // menor = v[0];

    for(j = i+1; j < tam; j++){
      
      if(v[j] < menor){ // 2, 1, 4, 3, 5;
        menor = j;
      }
    }

    if(i != menor){
      aux = v[menor];
      v[menor] = v[i];
      v[i] = aux;
    }
  }
  return 1;
}

int main(){ 
  int vet[] = {1,5,4,3,7,6,2};
  int tam = 7;

  printf("Vetor Desordenado\n");
  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  selectionSort(vet, tam);

  printf("\nVetor Ordenado\n");

  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  printf("\n");
  
  return 0;
}