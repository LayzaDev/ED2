#include <stdio.h>
#include <stdlib.h>

int mergeSort(int *v, int ini, int fim){

  int meio;

  if(ini < fim){
    meio = (ini + fim) / 2;
    mergeSort(v, ini, meio); // parte 1 do vetor (do meio para a esquerda)
    mergeSort(v, meio + 1, fim); // parte 2 do vetor (do meio + 1 para a direita);
    merge(v, ini, meio, fim);
  }

  return 1;
}

int merge(int *v, int ini, int meio, int fim){

  int *aux, p1, p2, tam, f1, f2, i, j, k;
  f1 = f2 = 0;
  p1 = ini;
  p2 = meio + 1;
  tam = fim - ini + 1;
  aux = (int *) malloc(tam * sizeof(int));

  if(aux != NULL){
    for(i = 0; i < tam; i++){
      if(f1 == 0 && f2 == 0){ // verifica se o vetor acabou
        if(v[p1] < v[p2]){ // verifica qual dos elementos é maior;
          aux[i] = v[p1];  // se p1 for menor que p2, insere p1
          p1++; // vai para o proximo elemento de p1
        } else {
          aux[i] = v[p2]; // se p2 for menor que p1, insere p2
          p2++; // vai para o proximo elemento de p2
        }
        if(p1 > meio){ // se o vetor p1 chegou ao fim
          f1 = 1;
        }
        if(p2 > fim) {
          // se o vetor p2 chegou ao fim
          f2 = 1;
        }
      } else { // Qual vetor acabou?
        if(f1 == 1){
          aux[i] = v[p2];
          p2++;
        } else {
          aux[i] = v[p1];
          p1++;
        }
      }
    }
    // passa os elementos do vetor aux para o vetor original
    for(j = 0; j < tam; j++, k++){
      v[k] = aux[j];
    }
  }
  free(aux);
  return 1;
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