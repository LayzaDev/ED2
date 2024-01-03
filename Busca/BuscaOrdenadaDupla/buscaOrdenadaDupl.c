#include <stdio.h>
#include <stdlib.h>

int buscaOrdenada(int *vet, int chave, int fim){

  int i = 0;

  while (i < fim && vet[i] < chave)
  {
    i++;
  }

  if(chave == vet[i]){
    return i;
  } 
    
  return -1;
  
}

int main(){

  int vet[] = {2, 2, 12, 36, 45, 56};
  int fim = 6;
  int chave, op;

  do{
    printf("\nEntre com o valor a ser buscado: ");
    scanf("%d", &chave);
    
    int resultado = buscaOrdenada(vet, chave, fim);

    if(resultado != -1){
      printf("\nO valor '%d' foi encontrado na posicao '%d'.\n", chave, resultado);
    } else {
      printf("\nO valor '%d' não foi encontrado.\n", chave);
    }
    
    printf("\nDeseja fazer uma nova busca? \n0 - Sair \n1 - Nova Busca\n");
    scanf("%d", &op);

  } while(op != 0);
  
 return 0;
}