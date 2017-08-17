#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[50];
    int i;

    printf("Digite um nome: ");

    for(i = 0; i < 50; i++){
        scanf("%c", &nome);
        printf("%s \n", nome);

    }

    return 0;
}
