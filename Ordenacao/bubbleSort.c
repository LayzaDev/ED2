#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int *v, int tam){

  int aux, fim, troca;
  fim = tam;

  do{
    troca = -1;

    for(int i = 0; i < fim - 1; i++){
      if(v[i] > v[i+1]){
        aux = v[i]; 
        v[i] = v[i+1];
        v[i+1] = aux;

        troca = i;
      }
    }
    fim--;
  } while(troca != -1);
  return 0;
}

int main(){ 
  int vet[] = {1,5,4,3,7,6,2};
  int tam = 7;

  printf("Vetor Desordenado\n");
  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  bubbleSort(vet, tam);

  printf("\nVetor Ordenado\n");

  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  printf("\n");
  
  return 0;
}