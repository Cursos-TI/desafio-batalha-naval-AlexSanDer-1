#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
  //Representação colunas
  char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
  //Criando tabuleiro 10x10
  int tabuleiro[10][10] = {0};



  //Cabeçalho
  printf("  TABULEIRO BATALHA NAVAL \n");
  printf("  ");

  //Representaça das colunas
     for (int i = 0; i < 10; i++){
     printf("%c ",colunas[i]);
    }
    printf("\n");

   //Definindo posição do navio
    for (int i = 0; i < 3; i++){
      tabuleiro[2][4 + i]  = 3;  //horizontal
    }

    for (size_t i = 0; i < 3; i++)
    {
       tabuleiro[i + 4][8]  = 3;  //vertical
    }
    

  //Imprimindo numero de linhas tabuleiro
    for (int i = 0; i < 10; i++){
    printf("%d", i + 1);
    for (int j = 0; j < 10; j++){
   printf("%2d",tabuleiro[i][j]);
   }
  printf("\n");
  }

  

    
    
  
    return 0;
}
