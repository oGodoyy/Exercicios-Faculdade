#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, valorCaixa;
    float areaTotal, custoTotal;
    int caixas;

    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);

    printf("Qual é o comprimento da área em metros? ");
    scanf("%f", &comprimento);

    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valorCaixa);

    areaTotal = largura * comprimento;
    caixas = (int) ceil(areaTotal / 2.5);
    custoTotal = caixas * valorCaixa;

    printf("Área total a ser revestida: %.2f m²\n", areaTotal);
    printf("Quantidade de caixas necessárias: %d\n", caixas);
    printf("Custo total da compra: R$ %.2f\n", custoTotal);

    return 0;
}