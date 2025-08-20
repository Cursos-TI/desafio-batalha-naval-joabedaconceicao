#include <stdio.h>


int main() {
    char linha[10]= {'A' ,'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    

    // Criando o tabuleiro (Matriz 10x10)
    
     int tabuleiro[10][10];
     int navio1[3]; // navio horizontal
     int navio2[3]; // navio vertical
     printf("Tabuleiro de batalha naval\n");

          // navio 1 horizontal
         for (int j = 0; j < 3; j++) {
            tabuleiro[0][j] = 3;
         }

          // navio 2 vertical
        for (int i = 0; i < 3; i++) {
            tabuleiro[i+2][2] = 3;
        }


     for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
        
       if (tabuleiro[i][j] == 0) {
            printf("0s "); // Água
       }  else {
            printf("3s ");  // Navio
       }
        
        }
        printf("\n "); // Pular linha a cada linha do tabuleiro
     }

        
    return 0;
}
