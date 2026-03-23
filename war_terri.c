// chamada das bibliotecas necessárias para o programa
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
   
   // Variável para armazenar o número de territórios a serem inseridos
   int numero_territorio;
   printf("Digite o numero do territorio: ");
   scanf("%d", &numero_territorio);
   
   if (numero_territorio > 5){
      printf("Numero de territorio excede o limite permitido (5).\n");
      return 1; // Encerra o programa com código de erro
   }
  
   // Coletando informações para cada território
   for (int i = 0; i < numero_territorio; i++) {
      printf("Digite o nome do territorio %d: ", i + 1);
      scanf("%s", territorios[i].nome_territorio);
      printf("Digite a cor do exercito %d: ", i + 1);
      scanf("%d", &territorios[i].cor_exercito);
      printf("Digite o numero de tropas %d: ", i + 1);
      scanf("%d", &territorios[i].numero_tropas);
   }
   // Exibindo as informações do território
   printf("Informacoes dos Territorios cadastrados:\n");
   for (int i = 0; i < numero_territorio; i++) {
      printf("\033[1;31mNome do Territorio %d: %s\033[0m\n", i + 1, territorios[i].nome_territorio);
      printf("Cor do Exercito %d: %d\n", i + 1, territorios[i].cor_exercito);
      printf("Numero de Tropas %d: %d\n", i + 1, territorios[i].numero_tropas);
   }
return 0;
}
