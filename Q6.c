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
/*char jogadores[10];
    int voto = 1;
    int i, j;

    printf("Enquete: Quem foi o melhor jogador?");
    scanf("%d", &voto);

        for(j = 0; j <= 10; j++)
        {
            if (voto > 0 && voto <= 23)
            {
                scanf("%d", &voto);
                jogadores[j] = voto;
                i++; //contagem de votos
            }
            if (voto > 23)
            {
                printf("Voto invalido. Digite novamente");
                scanf("%d", &voto);
            }
            if (voto == 0)
            {
                printf("Votacao encerrada");
                break;
            }*/
  return 0;

}
