#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
    char cargo[50];
} Funcionario;

Funcionario cadastraFuncionario(char *nome, int idade, float salario, char *cargo) {
    Funcionario f;
    strcpy(f.nome, nome);
    strcpy(f.cargo, cargo);
    f.idade = idade;
    f.salario = salario;
    return f;
}

float maiorSalario(float v1, float v2, float v3) {
    if (v1 > v2 && v1 > v3) {
        return v1;
    } else if (v2 > v1 && v2 > v3) {
        return v2;
    } else {
        return v3;
    }
}

int main(void) {
    Funcionario f1, f2, f3;
    f1 = cadastraFuncionario("Raul", 20, 1200, "Estagiario");
    f2 = cadastraFuncionario("Mamaus", 18, 0, "Desempregado");
    f3 = cadastraFuncionario("Casadinho", 21, 5000, "CLT");

    printf("Maior salario: %.2f", maiorSalario(f1.salario, f2.salario, f3.salario));

}