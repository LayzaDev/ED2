#include <stdio.h>
#include <stdlib.h>

int buscaLinearDupl(int *vet, int chave, int fim){

  for(int i = 0; i < fim; i++){
    if(chave == vet[i]){
      return i;
    }
  }

  return -1;
}

int main(){

  int vet[] = {12, 2, 45, 36, 2, 56};
  int fim = 6;
  int chave;

  printf("Entre com o valor a ser buscado: ");
  scanf("%d", &chave);

  int resultado = buscaLinearDupl(vet, chave, fim);

  if(resultado != -1){
    printf("O numero %d foi encontrado na posicao %d do vetor. \n", chave, resultado);
  } else {
    printf("O numero %d não foi encontrado no vetor. \n", chave);
  }
  
  return 0;
}