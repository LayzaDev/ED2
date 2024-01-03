#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int ini, int fim){

  int esq, dir, pivo, aux;
  esq = v[ini]; // 0 
  dir = v[fim]; // 5
  pivo = v[ini]; // 10

  while(esq < dir){ // 0 < 5

    while(v[esq] <= pivo && esq <= fim){
      esq++;
    }

    while(v[dir] > pivo && dir >= ini){
      dir--;
    }

    if(esq < dir){ // 4 < 5
      aux = v[esq]; // aux = 4
      v[esq] = v[dir]; // v[esq] = 5
      v[dir] = aux; // v[dir] = 4
    }
  }
  v[ini] = v[dir]; // v[ini] = 4
  v[dir]= pivo; // 4
  return dir;
}

int quickSort(int *v, int ini, int fim){
  int pivo; // posicao do pivo
  if(ini < fim){
    pivo = particiona(v, ini, fim);
    quickSort(v, ini, pivo-1); // lado esquerdo do pivo
    quickSort(v, pivo + 1, fim); // lado direito do pivo
  }
}

int main(){ 

  int vet[] = {23, 4, 67, -8, 90, 54, 21};
  int ini = vet[0];
  int fim = vet[6];

  printf("\nVetor Desordenado\n");
  for(int i = 0; i < fim; i++){
    printf("%d ", vet[i]);
  }

  mergeSort(vet, ini, fim);

  printf("\nVetor Ordenado\n");
  
  for(int i = 0; i < fim; i++){
    printf("%d ", vet[i]);
  }

  return 0;
}