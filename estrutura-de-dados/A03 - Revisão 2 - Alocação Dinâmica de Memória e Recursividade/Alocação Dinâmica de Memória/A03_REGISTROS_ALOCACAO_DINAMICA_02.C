
/* Exemplo de cria��o de Registros e Ponteiros */

#include<stdio.h>
#include<stdlib.h> // Para uso da fun��o malloc

struct Ponto{
   int x, y;
};

typedef struct Ponto Ponto;

int main(){

   // Declara��o de ponteiro para Registros Ponto
   Ponto* pontos;
   int    quantidade, indice;

   printf("\n Quantos pontos voce quer ler? ");
   scanf("%d", &quantidade);

   if (quantidade <= 0){
       printf("\a\n Quantidade nao pode ser menor ou igual a zero!\n");
       return -1;
   }

   /* Atribui��o do endere�o da �rea de mem�ria alocada para o ponteiro
      Como � alocada uma quantidade de pontos, na pr�tica � um vetor din�mico */

   pontos = (Ponto*) malloc(quantidade * sizeof(Ponto));

   if (pontos == NULL){
       printf("\a\n Erro na alocacao de memoria!\n");
       return -2;
   }

   for (indice = 0; indice < quantidade; indice++){
       printf("\n Ponto %d - Entre com o valor x: ", indice + 1);
       scanf("%d", &pontos[indice].x);
       printf(" Ponto %d - Entre com o valor y: ", indice + 1);
       scanf("%d", &pontos[indice].y);
   }

   printf("\n Impressao dos valores");
   printf("\n =====================\n\n");

   for (indice = 0; indice < quantidade; indice++){
      printf(" Valores do Ponto %d = (%d,%d)\n", indice+1, pontos[indice].x, pontos[indice].y);
   }

   // Libera a mem�ria alocada
   free(pontos);

   return 0;
}
