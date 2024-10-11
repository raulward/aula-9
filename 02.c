#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} ponto;

int main(void) {
    ponto p1, p2;
    float distancia;

    p1.x = 10.3;
    p2.x = 90.3;
    p1.y = 1.75;
    p2.y = 3.5;

    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y + p1.x, 2));

    printf("A distancia entre os pontos e: %.2f\n", distancia);
}