#include <stdio.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

float calcularArea(Retangulo r);
float calcularPerimetro(Retangulo r);

int main() {
    Retangulo r;

    printf("Digite a largura do retângulo: ");
    scanf("%f", &r.largura);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &r.altura);

    float area = calcularArea(r);
    float perimetro = calcularPerimetro(r);

    printf("Área do retângulo: %.2f\n", area);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}

float calcularArea(Retangulo r) {
    return r.largura * r.altura;
}

float calcularPerimetro(Retangulo r) {
    return 2 * (r.largura + r.altura);
}
