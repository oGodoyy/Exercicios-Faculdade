#include <stdio.h>

int main() {
    float temp[7], soma = 0, media, maior, menor;
    int i, acima = 0;
    char *dias[7] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};

    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura da [%s]: ", dias[i]);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / 7;
    maior = temp[0];
    menor = temp[0];

    for (i = 0; i < 7; i++) {
        if (temp[i] > maior) {
            maior = temp[i];
        }
        if (temp[i] < menor) {
            menor = temp[i];
        }
        if (temp[i] > media) {
            acima++;
        }
    }

    printf("Média: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", acima);

    return 0;
}