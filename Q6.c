#include <stdio.h>
#include <string.h>

float Percentual()
{

}

int main()
{
  int numjogador[23];
  int cont = 0;

  while (0 < numjogador <= 23){
    printf("Enquete: Quem foi o melhor jogador?");
    printf("\nNumero do jogador: ");
    scanf("%d", &numjogador);

    if (numjogador > 23){
      printf("\n Somente votos entre 1 e 23 sao validos");
    }

    if(numjogador == 0){
      printf("\nVotacao encerrada");
      cont++;
      printf("\nTotal de votos: %d", cont);
    }


  }

  return 0;

}
