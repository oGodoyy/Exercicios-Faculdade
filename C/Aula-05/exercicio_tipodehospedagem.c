#include <stdio.h>
#include <ctype.h>

int main() {
    char tipo;
    int diarias;
    float valorDiaria, total;

    printf("Qual o tipo de hospedagem (S-D-T)? ");
    scanf(" %c", &tipo);

    printf("Qual a quantidade de diárias? ");
    scanf("%d", &diarias);

    tipo = toupper(tipo);

    if (tipo == 'S') {
        valorDiaria = 300.00;
    } else if (tipo == 'D') {
        valorDiaria = 450.00;
    } else if (tipo == 'T') {
        valorDiaria = 500.00;
    } else {
        printf("Tipo inválido!!!\n");
        return 0;
    }

    total = valorDiaria * diarias;
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}