// chamada das bibliotecas necessárias para o programa
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Estrutura para representar um território
typedef struct {
   char nome_territorio[30];
   char cor_exercito[10];
   int numero_tropas;
} Territorio;

void atacar(Territorio* atacante, Territorio* defensor) {
   
}
int main() {
   
   
   // Variável para armazenar o número de territórios a serem inseridos
   int numero_territorio;
   printf("Digite o numero do territorio: ");
   scanf("%d", &numero_territorio);
   
   if (numero_territorio > 5){
      printf("Numero de territorio excede o limite permitido (5).\n");
      return 1; // Encerra o programa com código de erro
   }
   Territorio*t =
   (Territorio*)malloc(sizeof(Territorio) * numero_territorio); // Alocação dinâmica de memória para um território
   if (t == NULL) { 
      printf("Erro ao alocar memoria para o territorio.\n");
      return 1; // Encerra o programa com código de erro
   }
   // Loop para inserir as informações dos territórios
   for (int i = 0; i < numero_territorio; i++) {
      printf("Digite o nome do territorio %d: ", i + 1);
      scanf("%s", t[i].nome_territorio);
      printf("Digite a cor do exercito %d: ", i + 1);
      scanf("%s", t[i].cor_exercito);
      printf("Digite o numero de tropas %d: ", i + 1);
      scanf("%d", &t[i].numero_tropas);
   }
   // Exibindo as informações do território
   printf("-----Informacoes dos Territorios cadastrados:-----\n");
   for (int i = 0; i < numero_territorio; i++) {
      printf("Nome do Territorio: %s\n",t[i].nome_territorio);
      printf("Cor do Exercito: %s\n",t[i].cor_exercito);
      printf("Numero de Tropas: %d\n", t[i].numero_tropas);
      printf("\n");
    }

 
   free(t); // Liberação da memória alocada para o território
return 0;
}
