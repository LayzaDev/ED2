#include <stdio.h>
#include <stdlib.h>

int verifica (int v[], int n){

  int anterior = v[0], sim = 1;

  for(int i = 1; i < n && sim; ++i){
    if(anterior > v[i]){
      sim = 0;
      anterior = v[i];
    }
  }

  return sim;
}


int main(){

  int v[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n = 10;

  for(int i = 0; i < n; i++){
    printf("\n Vetor: %d ", v[i]);
  }
  
  int ehCrescente = verifica(v, n);

  printf("\nEh crescente? %d \n", ehCrescente);

  return 0;
}