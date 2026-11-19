#include <stdio.h>
#define PI 3.141

int main() {
 float raio;
 float perimetro;

 printf("Digite a medida do raio (cm): ");
 scanf("%f", &raio);
 
 perimetro = 2 * PI * raio;
 
 printf("O perimetro é: %.2f", perimetro);
 return 0;
}
 
 
 
 
