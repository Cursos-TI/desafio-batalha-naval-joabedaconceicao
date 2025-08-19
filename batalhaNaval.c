#include <stdio.h>


int main() {
    char linha[10]= {'A' ,'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int i = 0;
    int j = 0;
    // Criando o tabuleiro (Matriz 10x10)
    
     int tabuleiro[10][10];
     printf("Tabuleiro batalha naval\n");
     for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
        
        printf("%c", linha[i]);
        
        }
        
     }
    return 0;
}
