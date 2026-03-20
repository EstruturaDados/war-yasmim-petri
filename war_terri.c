#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Estrutura para representar um território
typedef struct {
   char nome_territorio[100];
   char cor_exercito[100];
   int numero_tropas;
} Territorio;

//
int main() {
   Territorio territorios [5]; // Array para armazenar até 5 territórios
   
  for (int i = 0; i < 5; i++) {
      printf("Digite o nome do territorio: ");
      scanf("%s", territorios[i].nome_territorio);
      printf("Digite a cor do exercito: ");
      scanf("%s", territorios[i].cor_exercito);
      printf("Digite o numero de tropas: ");
      scanf("%d", &territorios[i].numero_tropas);
   }
   // Exibindo as informações do território
   printf("Informacoes do Territorio:\n");
   for (int i = 0; i < 5; i++) {
       printf("Nome do Territorio: %s\n", territorios[i].nome_territorio);
       printf("Cor do Exercito: %s\n", territorios[i].cor_exercito);
       printf("Numero de Tropas: %d\n", territorios[i].numero_tropas);
   }
   printf("Esse é o estado do territorio: %s\n", territorios[0].nome_territorio);

   return 0;
}
