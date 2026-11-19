#include <stdio.h>

int main() {
    float salarios[1000];
    float salario;
    int quantidade = 0;

    while (1) {
        printf("Digite o salario do funcionario %d (0 para parar): ",
               quantidade + 1);
        scanf("%f", &salario);

        if (salario == 0) {
            break;
        }

        salarios[quantidade] = salario;
        quantidade++;
    }

    printf("\n--- SALARIOS CADASTRADOS ---\n");

    for (int i = 0; i < quantidade; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, salarios[i]);
    }

    return 0;
}
