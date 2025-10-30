#include <stdio.h>

int main(){

  int n1, n2, n3;       /* dados de entrada */
  int aux;
                /* auxiliar para troca de conteudod e variveis */
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    canf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

  /* Forca que n1 <= n2 */

  if (n1 > n2){
      /* troca o conteudo das variaveis n1 e n2 */
      aux = n1;
      n1  = n2;
      n2  = aux;
    }
  /* Neste ponto do programa vale que n1 <= n2 */
    if(n2<=n3){ /* n1 <= n2 e n2 <= n3 */
        printf("A ordem crescente: %d %d %d\n",n1,n2,n3);
        printf("A ordem decrescente %d %d %d\n",n3,n2,n1);
    }else{ /* n1 <= n2 e n3 < n2 */
        if (n1<=n3){ /* n1 <= n3 e n3 < n2 */
            printf("A ordem crescente: %d %d %d\n",n1,n3,n2);
            printf("A ordem decrescente %d %d %d\n",n2,n3,n1);
        }else{ /* n3 < n1 e n1 <= n2 */
            printf("A ordem crescente: %d %d %d\n",n3,n1,n2);
            printf("A ordem decrescente %d %d %d\n",n2,n1,n3);
        }
    }
  return 0;
}
