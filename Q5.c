#include <stdio.h>
#include <string.h>

#define  TAM 5

typedef struct
{
  char nomeb[10];
  char estilo[10];
  int integantes;
  int posrank;
} tBandas;

int PreencherBandas ()
{
  int i;

  printf("\n Digite suas %d bandas favoritas", TAM);

  for(i = 0; i < TAM; i++){
    printf("\n Nome: ");
    scanf("%s", banda[i].nome);
    printf("\n Estilo: ");
    scanf("%s", banda[i].estilo);
    printf("\n Integrantes: ");
    scanf("%s", banda[i].integantes);
    printf("\n Ranking: ", banda[i].posrank);
  }

  printf("\n");
}

void MostrarBandas ()
{
  int j;

  for(j = 0; j < TAM; j++){
    printf("\n Banda: %s", banda[j].nome);
    printf("\n Estilo: %s", banda[j].estilo);
    printf("\n Integrantes: %d", banda[j].integantes);
  }
}

int rank()
{
  int r, i;

  printf("\n Digite um numero do Ranking: ");
  scanf("%d", &r);

  printf("\n A banda da posicao %d eh: ", r, banda[i]);

}



int main()
{
  tBandas banda[TAM];

  PreencherBandas(banda);
  MostrarBandas(banda);

}
