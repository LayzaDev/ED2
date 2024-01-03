#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *v, int n, int chave){
  int inicio = 0;
  int fim = n-1;
  int meio;

  while(inicio <= fim){
    meio = (inicio + fim) / 2;
    if(chave < v[meio]){
      fim = meio - 1;
    } else {
      if(chave > v[meio]){
        inicio = meio + 1;
      } else {
        return meio;
      }
    } 
  }
  return -1;
}
int main(){
  int vet[10] = {13, 14, 19, 43, 47, 52, 65, 82, 89, 91};

  int valor, opcao;

  do{
    printf("Entre com o valor a ser buscado: ");
    scanf("%d", &valor);

    printf("\nResultado: %d\n", buscaBinariaIterativa(vet, valor, 9));

    printf("\n0 - Sair \n1 - Nova Busca\n");
    scanf("%d", &opcao);

  } while(opcao != 0);

  return 0;
}