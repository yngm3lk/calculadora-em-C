#include <stdio.h>
#include <stdlib.h>

int main(){        
    int opcao;
    double a, b, resultado;
    char continuar;

    while(1) {
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opção inválida. Por favor, insira um número entre 1 e 5.\n");
            while(getchar() != '\n');
            continue;
        }

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida. Por favor, insira um número entre 1 e 5.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        printf("Digite o segundo número: ");
        scanf("%lf", &b);

        if (opcao == 1) {
            resultado = a + b;
            printf("Resultado: %g + %g = %g\n", a, b, resultado);
        } else if (opcao == 2) {
            resultado = a - b;
            printf("Resultado: %g - %g = %g\n", a, b, resultado);
        } else if (opcao == 3) {
            resultado = a * b;
            printf("Resultado: %g * %g = %g\n", a, b, resultado);
        } else if (opcao == 4) {
            if (b == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            } else {
                resultado = a / b;
                printf("Resultado: %g / %g = %g\n", a, b, resultado);
            }
        }

        while(1) {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);
            if (continuar == 's' || continuar == 'S') {
                break;
            } else if (continuar == 'n' || continuar == 'N') {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;
            } else {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        }
    }

    return 0;
}
