#include <stdio.h>
#include <string.h>

int main()
{

    char jogadores[10];
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
            }
        }
  return 0;

}
