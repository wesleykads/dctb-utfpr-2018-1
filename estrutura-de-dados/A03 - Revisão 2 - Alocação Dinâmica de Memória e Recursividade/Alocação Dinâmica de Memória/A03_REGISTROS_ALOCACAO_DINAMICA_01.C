
/* Exemplo de cria��o de Registros e Ponteiros */

#include<stdio.h>
#include<stdlib.h> // Para uso da fun��o malloc

struct Ponto{
   int x, y;
};

typedef struct Ponto Ponto;

int main(){

   // Declara��o de ponteiro para Registros Ponto
   Ponto* ponteiroPonto;

   // Atribui��o do endere�o da �rea de mem�ria alocada para o ponteiro
   ponteiroPonto = (Ponto*) malloc(sizeof(Ponto));

   if (ponteiroPonto == NULL){
        printf("\a\n Erro na alocacao de memoria!\n");
        return -1;
   }

   // Atribui��o de valores atrav�s do operador de membro do ponteiro
   ponteiroPonto->x = 10;
   ponteiroPonto->y = 20;

   printf("\n Valores do Ponto = (%d,%d)\n", ponteiroPonto->x, ponteiroPonto->y);

   // Libera a mem�ria alocada
   free(ponteiroPonto);

   return 0;
}
