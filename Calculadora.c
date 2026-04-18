#include <stdio.h>

int main() {
    float num1, num2, resultado; // variáveis para os números e resultado
    int opcao;                   // opção escolhida no menu
    char continuar = 's';        // controla se o usuário quer repetir

    // Loop principal
    while (continuar == 's' || continuar == 'S') {
        
        // Exibe o menu de operações
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("Escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        // Entrada dos números
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Estrutura de decisão baseada na opção escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("O resultado da soma é %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("O resultado da subtração é %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("O resultado da multiplicação é %.2f\n", resultado);
                break;

            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("O resultado da divisão é %.2f\n", resultado);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

        // Pergunta se o usuário deseja continuar
        printf("\nDeseja fazer outra operação? (s/n): ");
        scanf(" %c", &continuar);
    }

    // Mensagem final
    printf("Encerrando a calculadora...\n");
    return 0;
}
