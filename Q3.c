#include <stdio.h>
#include <string.h>

int main ()
{
    int cont = 0;
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", &nome);

    if((nome[strlen(nome)- 1] == nome[0]) && (nome[strlen(nome)- 2] == nome[1])){
        cont++;
    }

    if (cont != 0){
        printf("\n Eh um palindromo");
    } else {
        printf("\n Nao eh um palindromo");
    }

    return 0;
}
