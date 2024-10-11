#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int ehAnoBissexto(int ano);
int validarData(Data d);

int main() {
    Data d;

    printf("Digite o dia: ");
    scanf("%d", &d.dia);

    printf("Digite o mês: ");
    scanf("%d", &d.mes);

    printf("Digite o ano: ");
    scanf("%d", &d.ano);

    if (validarData(d)) {
        printf("A data %02d/%02d/%d é válida.\n", d.dia, d.mes, d.ano);
    } else {
        printf("A data %02d/%02d/%d não é válida.\n", d.dia, d.mes, d.ano);
    }

    return 0;
}

int ehAnoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int validarData(Data d) {
    int diasNoMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d.mes < 1 || d.mes > 12) {
        return 0;
    }

    if (ehAnoBissexto(d.ano) && d.mes == 2) {
        diasNoMes[1] = 29;
    }

    if (d.dia < 1 || d.dia > diasNoMes[d.mes - 1]) {
        return 0;
    }

    return 1;
}
