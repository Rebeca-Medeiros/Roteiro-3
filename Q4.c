#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[50];
} tAluno;

tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso)
{
    int i, j;
    int tam = 3;

    for(i = 0; i <= tam; i++){
        for(j = i + 1; j <= tam; j++){
            if(curso[j] == curso[i]){
                printf("\n Alunos de computacao: %d", curso);
                printf("\n Alunos de fisica: %d", curso);
            }
        }
    }
}

int main ()
{
    tAluno gAlunos[3];

    strcpy(gAlunos[0].nome, "Hermione");
    strcpy(gAlunos[0].endereco, "Av. ABC");
    strcpy(gAlunos[0].matricula, "87654356");
    strcpy(gAlunos[0].curso, "Computacao");

    strcpy(gAlunos[1].nome, "Harry");
    strcpy(gAlunos[1].endereco, "Av. DEF");
    strcpy(gAlunos[1].matricula, "87692314");
    strcpy(gAlunos[1].curso, "Computacao");

    strcpy(gAlunos[2].nome, "Ron");
    strcpy(gAlunos[2].endereco, "Av. GHI");
    strcpy(gAlunos[2].matricula, "98705463");
    strcpy(gAlunos[2].curso, "Fisica");

    consultaAlunosPorCurso(gAlunos);

    return 0;
}








