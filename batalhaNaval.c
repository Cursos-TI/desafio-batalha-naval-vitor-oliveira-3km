#include <stdio.h>
// Foi a ideia era elaborar uma matriz 10x10. Mas para a melhor visualização no momento de rodar o código, achei melhor acrescentar em 11.
int main() {
    char matriz[11][11]; // +1 para incluir rótulos

    //Cabeçalho da primeira linha que vai de (A a J)
    matriz[0][0] = ' '; // canto superior esquerdo para criar um espaço e melhorar a visualização 
    for (int j = 1; j <= 11; j++) {
        matriz[0][j] = 'A' + (j - 1);
    }

    // Aqui eu fiz preenchimeno primeira coluna (1 a 10) e depois acrescentei os zeros no resto da matriz
    for (int i = 1; i <= 11; i++) {
        matriz[i][0] = '0' + i; // Pode causar erro para i > 9
        if (i == 11)
            matriz[i][0] = '1'; // Ajuste para '10'
        for (int j = 1; j <= 11; j++) {
            matriz[i][j] = '0'; // Preeche com ponto ou outro caractere que desejar
        }
    }

    // Aqui é a primeira impressão como solicitado pelo Professor sergio Cardoso
    /*printf("");
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            if (i == 0 && j == 0) {
                printf("   "); // essa parte eu fiz para criar um espaço no canto superior esquerdo, para ficar mais legível roda
            } else if (i == 0) {
                printf(" %c ", matriz[i][j]);
            } else if (j == 0) {
                if (i == 10)
                    printf("%2d ", 10);
                else
                    printf(" %d ", i);
            } else {
                printf(" %c ", matriz[i][j]);
            }
        }
        printf("\n");
    }*/

    // Colocando os barcos nas suas devidas posições!
    matriz [4][4] = '3';
    matriz [5][4] = '3';
    matriz [6][4] = '3';
    matriz [2][6] = '3';
    matriz [2][7] = '3';
    matriz [2][8] = '3';
    matriz [7][6] = '3';
    matriz [6][7] = '3';
    matriz [5][8] = '3';
    matriz [3][1] = '3';
    matriz [2][2] = '3';
    matriz [1][3] = '3';
    
    
    //Forma que eu encontrei para a impressão da matriz levando em conta os barcos !
    printf("### TABULEIRO DE BATALHA NAVAL ### \n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 && j == 0) {
                printf("   ");
            }else if (i == 0) {
                printf(" %c ", matriz[i][j]);

            } else if(j == 0) {
                if (i == 11)
                
                    printf("%2d ", 11);
                 else 
                    printf(" %d ", i);
                } else {
                    printf(" %c ", matriz[i][j]);

                }
                
                
            }

        printf("\n");
            
        }
     
        
    }
