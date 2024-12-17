// importando as libs
#include <stdio.h>
#include <string.h>

// definindo os limites
#define MAX_CIDADES 32
#define MAX_NOME 50

int main() {
    
    // definindo as variáveis
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    int opcao;

    // laço de repetição para cadastro de cidade, exibir dados ou sair
    while (1)
    {
        printf("Escolha uma opção: \n");
        printf("1. Cadastrar Cidade\n");
        printf("2. Exibir Dados das Cidades\n");
        printf("3. Sair\n");
        printf("Insira a opção desejada: \n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Cadastrar Cidade\n");

            printf("Insira o código da cidade: (EX: A01)");
            scanf("%s", &codigo);

            printf("Insira o nome da cidade: ");
            scanf("%s", nome);

            printf("Insira a população da cidade: ");
            scanf("%f", &populacao);

            printf("Insira a área (km²): ");
            scanf("%f", &area);

            printf("Insira o PIB: ");
            scanf("%f", &pib);

            printf("Insira o número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos);

            printf("Cadastro realizado com sucesso!");
        }else if(opcao == 2) {
            printf("DADOS DA CIDADE");
            printf("Código: %s\n", codigo);
            printf("Nome: %s\n", nome);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km²\n", area);
            printf("PIB: R$ %.2f\n", pib);
            printf("Pontos Turísticos: %d\n", pontos_turisticos);
        }else if(opcao == 3) {
            printf("Encerrando o programa");
            break;
        }else {
            printf("Opção inválida");
        }
    }

    return 0;
}