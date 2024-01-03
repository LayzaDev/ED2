#include <stdio.h>
#include <stdlib.h>


int verificaOrdem(int *v, int n){
  
  int next, ehCrescente = 0;
  
  for(int i = 0; i < n; i++){
    next = v[i+1];
    if(v[i] < next){
      ehCrescente = 1;
    }
  }
  return ehCrescente;
}


int main(){

  int n = 5;
  int vet[] = {5, 4, 3, 2, 1};

  for(int i = 0; i < n; i++){
    printf("%d, ", vet[i]);
  }

  int ehCrescente = verificaOrdem(vet, n);

  if(ehCrescente == 1){
    printf("\nO vetor eh crescente!\n");
  } else {
    printf("\n O vetor não eh crescente!");
  }

  return 0;
}