// chamada das bibliotecas necessárias para o programa
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para representar um território
typedef struct {
   char nome_territorio[30];
   char cor_exercito[10];
   int numero_tropas;
} Territorio;

void atacar(Territorio* atacante, Territorio* defensor) {
    int dado_atacante = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6 para o atacante
    int dado_defensor = rand() % 6 + 1;
    printf("Dado do atacante: %d\n", dado_atacante);
    printf("Dado do defensor: %d\n", dado_defensor);


    if (dado_atacante > dado_defensor) {
        printf("O atacante (%s) venceu!\n", atacante->nome_territorio);
        defensor->numero_tropas -= 1;
    } else {
        printf("O defensor (%s) venceu!\n", defensor->nome_territorio);
        atacante->numero_tropas -= 1;
    }
}
int main() {
   srand(time(NULL));
   
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

    printf("-----Hora de começar a batalha:-----\n");
int i_atacante = -1, i_defensor = -1;
int dado_atacante, dado_defensor;
    printf("\nEscolha o indice do atacante: ");
    scanf("%d", &i_atacante);

    printf("Escolha o indice do defensor: ");
    scanf("%d", &i_defensor);

    if (i_atacante >= numero_territorio || i_defensor >= numero_territorio) {
        printf("Indice invalido.\n");
        free(t);
        return 1;
    }

    atacar(&t[i_atacante], &t[i_defensor]);

    printf("\n--- Resultado ---\n");
    for (int i = 0; i < numero_territorio; i++) {
        printf("%s: %d tropas\n", t[i].nome_territorio, t[i].numero_tropas);
    }
    
    int opcao;

    do {
        printf("\nDeseja realizar outro ataque ou sair?\n");
        printf("1 - Realizar outro ataque\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Executando ataque...\n");
            atacar()// Aqui você chama sua função atacar()
        } else if (opcao == 0) { 
            printf("Saindo do jogo...\n");
    
        } while (opcao != 0);
            
        free(t);
     // Liberação da memória alocada para o território
return 0;
}
