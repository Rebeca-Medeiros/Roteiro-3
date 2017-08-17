#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j;
    int tam;
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", &nome);

    tam = strlen(nome);

    for(i = 0; i < tam; i++){
        for(j = 0; j <= i; j++){
            printf("%c", nome[j]);
        }

        printf("\n");
    }

    return 0;
}
