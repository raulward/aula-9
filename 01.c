#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

typedef	struct {
    char title[TAM], author[TAM], ISBN[TAM];
    int year;
} book;

book cadastrarLivro(char* title, char* author, char* ISBN, int year);

int main() {
    book b[5];
    char title[TAM], author[TAM], ISBN[TAM];
    int year;

    for (int i = 0; i < 5; i++) {
        printf("Digite o titulo do livro %d: ", i);
        scanf("%s", title);
        printf("Digite o autor do livro %d: ", i);
        scanf("%s", author);
        printf("Digite o ISBN do livro %d: ", i);
        scanf("%s", ISBN);
        printf("Digite o ano do livro %d: ", i);
        scanf("%d", &year);

        b[i] = cadastrarLivro(title, author, ISBN, year);
    }

    for (int i = 0; i < 5; i++) {
        printf("Titulo: %s - Autor: %s - ISBN: %s - Ano: %d\n", b[i].title, b[i].author, b[i].ISBN, b[i].year);
    }
}

book cadastrarLivro(char* title, char* author, char* ISBN, int year) {
    book b;
    strcpy(b.author, author);
    strcpy(b.title, title);
    strcpy(b.ISBN, ISBN);
    b.year = year;
    return b;
}

