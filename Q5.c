#include <stdio.h>

#define  TAM 5

typedef struct
{
  char nomeb[10];
  char estilo[10];
  int integantes;
  int posrank;
} tBandas;

int PreencherBandas (tBandas *banda)
{
  int i;

  printf("\n Digite suas bandas favoritas");

  for(i = 0; i < TAM; i++){
    printf("\n Nome: ");
    scanf("%s", banda[i].nomeb);
    printf("\n Estilo: ");
    scanf("%s", banda[i].estilo);
    printf("\n Integrantes: ");
    scanf("%d", banda[i].integantes);
    printf("\n Ranking: ");
    scanf("%d", banda[i].posrank);
  }

  printf("\n");
}

void MostrarBandas (tBandas *banda)
{
  int j;

  for(j = 0; j < TAM; j++){
    printf("\n Banda: %s", banda[j].nomeb);
    printf("\n Estilo: %s", banda[j].estilo);
    printf("\n Integrantes: %d", banda[j].integantes);
    printf("\n Ranking: %d", banda[j].posrank);
  }
}

int rank(tBandas *banda)
{
  int r, i;

  printf("\n Digite um numero do Ranking: ");
  scanf("%d", &r);

  for(i = 0; i < TAM; i++){
      printf("\n A banda da posicao %d eh: %s", r, banda[i]);
  }


}



int main()
{
  tBandas *banda[TAM];

  PreencherBandas(banda);
  MostrarBandas(banda);
  rank(banda);

}
