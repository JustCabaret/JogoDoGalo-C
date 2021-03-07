#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main() {

  char P1[25], P2[25];
  char l1,l2,l3,l4,l5,l6,l7,l8,l9;
  int posP1, posP2, b, op, ganhar, opcor, opinstrucoes, contador, cp1;
  ganhar = 0; contador = 0; b = 0; cp1 = 0;
  l1 = ' ';l2 = ' ';l3 = ' ';l4 = ' ';l5 = ' ';l6 = ' ';l7 = ' ';l8 = ' ';l9 = ' ';
  // PosX - Inserir Posição X -> Não é preciso Invocar sozinho
  // PosO - Inserir Posição O -> Não é preciso Invocar sozinho
  // VerificacaoX - ver se X ganha -> Não é preciso Invocar sozinho
  // VerificacaoO - ver se O ganha -> Não é preciso Invocar sozinho
  // verificacaomenu - verificar opcoes do menu -> Não é preciso Invocar sozinho
  float posX () {

    switch (posP1)
    {
       case 1:
       cp1++;
       contador++;
       l1 = 'X';
       system("CLS");
       printf("+-----------------------------+\n");
       printf("|           Tabuleiro         |\n");
       printf("+-----------------------------+\n");
       printf("|                             |\n");
       printf("|         %c | %c | %c           |\n", l1, l2, l3);
       printf("|         ---------           |\n");
       printf("|         %c | %c | %c           |\n", l4, l5, l6);
       printf("|         ---------           |\n");
       printf("|         %c | %c | %c           |\n", l7, l8,l9);
       printf("|                             |\n");
       printf("+-----------------------------+\n");
       b++;
       break;

        case 2:
        l2 = 'X'; contador++;
        system("CLS");
        printf("+-----------------------------+\n");
        printf("|           Tabuleiro         |\n");
        printf("+-----------------------------+\n");
        printf("|                             |\n");
        printf("|         %c | %c | %c           |\n", l1, l2, l3);
        printf("|         ---------           |\n");
        printf("|         %c | %c | %c           |\n", l4, l5, l6);
        printf("|         ---------           |\n");
        printf("|         %c | %c | %c           |\n", l7, l8,l9);
        printf("|                             |\n");
        printf("+-----------------------------+\n");
        b++;
        break;

         case 3:
               l3 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 4:
               l4 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 5:
               l5 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 6:
               l6 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 7:
               l7 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 8:
               l8 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 9:
               l9 = 'X'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
       default:
         printf("Valor Incorreto");


  }

  }
  float posO () {
    switch (posP2)
    {
       case 1:
       l1 = 'O'; contador++; cp1++;
       system("CLS");
       printf("+-----------------------------+\n");
       printf("|           Tabuleiro         |\n");
       printf("+-----------------------------+\n");
       printf("|                             |\n");
       printf("|         %c | %c | %c           |\n", l1, l2, l3);
       printf("|         ---------           |\n");
       printf("|         %c | %c | %c           |\n", l4, l5, l6);
       printf("|         ---------           |\n");
       printf("|         %c | %c | %c           |\n", l7, l8,l9);
       printf("|                             |\n");
       printf("+-----------------------------+\n");
       b++;
       break;

        case 2:
        l2 = 'O'; contador++;
        system("CLS");
        printf("+-----------------------------+\n");
        printf("|           Tabuleiro         |\n");
        printf("+-----------------------------+\n");
        printf("|                             |\n");
        printf("|         %c | %c | %c           |\n", l1, l2, l3);
        printf("|         ---------           |\n");
        printf("|         %c | %c | %c           |\n", l4, l5, l6);
        printf("|         ---------           |\n");
        printf("|         %c | %c | %c           |\n", l7, l8,l9);
        printf("|                             |\n");
        printf("+-----------------------------+\n");
        b++;
        break;

         case 3:
               l3 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 4:
               l4 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 5:
               l5 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 6:
               l6 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 7:
               l7 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;
         case 8:
               l8 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;         case 9:
               l9 = 'O'; contador++;
               system("CLS");
               printf("+-----------------------------+\n");
               printf("|           Tabuleiro         |\n");
               printf("+-----------------------------+\n");
               printf("|                             |\n");
               printf("|         %c | %c | %c           |\n", l1, l2, l3);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l4, l5, l6);
               printf("|         ---------           |\n");
               printf("|         %c | %c | %c           |\n", l7, l8,l9);
               printf("|                             |\n");
               printf("+-----------------------------+\n");
               b++;
               break;       default:
          printf("Valor Incorreto");


    }}
  float verificacaoX(){
    if (((l1 == 'X') && (l2 == 'X') && (l3 == 'X')) || ((l4 == 'X') && (l5 == 'X') && (l6 == 'X')) || ((l7 == 'X') && (l8 == 'X') && (l9 == 'X'))){
      system("CLS");
      printf("Jogador %s ganhou!\n", P1);
      ganhar++;
      //Verificação Linhas
    }

    if (((l1 == 'X') && (l4 == 'X') && (l7 == 'X')) || ((l2 == 'X') && (l5 == 'X') && (l8 == 'X')) || ((l3 == 'X') && (l6 == 'X') && (l9 == 'X'))){
      system("CLS");
      printf("Jogador %s ganhou!\n", P1);
      system("exit");
      ganhar++;
      //Verificação Colunas
    }

    if (((l1 == 'X') && (l5 == 'X') && (l9 == 'X')) || ((l3 == 'X') && (l5 == 'X') && (l7 == 'X'))){
      system("CLS");
      printf("Jogador %s ganhou!\n", P1);
      ganhar++;
      //Verificação Diagonais
    }
    if (contador == 9){
      printf("EMPATE");
    }
  }
  float verificacaoO(){
    if (((l1 == 'O') && (l2 == 'O') && (l3 == 'O')) || ((l4 == 'O') && (l5 == 'O') && (l6 == 'O')) || ((l7 == 'O') && (l8 == 'O') && (l9 == 'O'))){
      system("CLS");
      printf("Jogador %s ganhou!", P2);
      ganhar++;
      //Verificação Linhas
    }

    if (((l1 == 'O') && (l4 == 'O') && (l7 == 'O')) || ((l2 == 'O') && (l5 == 'O') && (l8 == 'O')) || ((l3 == 'O') && (l6 == 'O') && (l9 == 'O'))){
      system("CLS");
      printf("Jogador %s ganhou!", P2);
      ganhar++;
      //Verificação Colunas
    }

    if (((l1 == 'O') && (l5 == 'O') && (l9 == 'O')) || ((l3 == 'O') && (l5 == 'O') && (l7 == 'O'))){
      system("CLS");
      printf("Jogador %s ganhou!", P2);
      ganhar++;
      //Verificação Diagonais
    }
    if (contador == 9){
      printf("EMPATE");
    }
  }
  float contagem(){

    for (b = 0; b <= 9;){
      if (b % 2 == 0){
        posP1 = 0;
      if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
        printf("\n%s - Posicao : ", P1);
        scanf("%i", &posP1);

        if ((posP1 == 1) && (cp1 == 1)){
          printf("ERRO");
          contagem();
        }else{
        posX();
        verificacaoX();}}
     if (ganhar == 1){
    return 0;
  }
}else if (b % 2 != 0){
  posP2 = 0;
    if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
      printf("\n %s - Posicao : ", P2);
      scanf("%i", &posP2);

      if ((posP2 == 1) && (cp1 == 1)){
        printf("ERRO");
      }else{
      posO();
      verificacaoX();}




    }
   if (ganhar == 1){
  return 0;
}
}
}

}
  float verificacaomenu(){
    switch (op) {
      case 1:
      system("CLS");
      printf("+------------------------------+\n");
      printf("|           Tabuleiro          |\n");
      printf("+------------------------------+\n");
      printf("|                              |\n");
      printf("|          1 | 2 | 3           |\n");
      printf("|         -----------          |\n");
      printf("|          4 | 5 | 6           |\n");
      printf("|         -----------          |\n");
      printf("|          7 | 8 | 9           |\n");
      printf("|                              |\n");
      printf("+------------------------------+\n");

      printf("-> Nome do Primeiro Jogador (X) : ");
      scanf("%s", &P1);
      printf("-> Nome do Segundo Jogador (O) : ");
      scanf("%s", &P2);
      system("CLS");
      printf("+------------------------------+\n");
      printf("|           Tabuleiro          |\n");
      printf("+------------------------------+\n");
      printf("|                              |\n");
      printf("|          1 | 2 | 3           |\n");
      printf("|         -----------          |\n");
      printf("|          4 | 5 | 6           |\n");
      printf("|         -----------          |\n");
      printf("|          7 | 8 | 9           |\n");
      printf("|                              |\n");
      printf("+------------------------------+\n");
      contagem();
      break;
    }
  }
  float menu(){
  printf("\n");
  printf("\t+------------------------------+\n");
  printf("\t|         JOGO DO GALO         |\n");
  printf("\t+------------------------------+\n");
  printf("\t|                              |\n");
  printf("\t|  1 - Jogar     2 - Intrucoes |\n");
  printf("\t|                              |\n");
  printf("\t|                              |\n");
  printf("\t|  3 - Cor       0 - Sair :(   |\n");
  printf("\t|                              |\n");
  printf("\t|                              |\n");
  printf("\t|             By :             |\n");
  printf("\t|   Bruno Bita & Hugo Cabaret  |\n");
  printf("\t|                              |\n");
  printf("\t+------------------------------+\n");
  printf("\n-> Opcao : ");
  scanf("%i",&op);

  if (op == 1)
  {
    system("CLS");
    verificacaomenu();
  }

  if (op == 2)  {
    system("CLS");
    printf("+------------------------------+\n");
    printf("|          Instrucoes          |\n");
    printf("+------------------------------+\n");
    printf("|                              |\n");
    printf("|      Numero de Jogadores     |\n");
    printf("|               2              |\n");
    printf("|                              |\n");
    printf("|           Objetivo           |\n");
    printf("|        Fazer uma linha       |\n");
    printf("|       com um so simbolo      |\n");
    printf("|                              |\n");
    printf("|          0 - Voltar          |\n");
    printf("|                              |\n");
    printf("+------------------------------+\n");
    printf("-> Opcao : ");
    scanf("%i",&opinstrucoes);

    switch (opinstrucoes) {
      case 0:
        system("CLS");
        menu();
    }

  }

  if (op == 3 ){
  do {
    system("CLS");
    printf("+------------------------------+\n");
    printf("|         MUDAR DE COR         |\n");
    printf("+------------------------------+\n");
    printf("|                              |\n");
    printf("|  1 - Branco     4 - Verde    |\n");
    printf("|                              |\n");
    printf("|  2 - Roxo       5 - Vermelho |\n");
    printf("|                              |\n");
    printf("|  3 - Azul       6 - Amarelo  |\n");
    printf("|                              |\n");
    printf("|                              |\n");
    printf("|          0 - Voltar          |\n");
    printf("|                              |\n");
    printf("+------------------------------+\n");
    printf("-> Opcao : ");
    scanf("%i",&opcor);


switch (opcor) {
  case 1:
    system("COLOR 07");
    break;
  case 2:
    system("COLOR 05");
    break;
  case 3:
    system("COLOR 03");
    break;
  case 4:
    system("COLOR 0A");
    break;
  case 5:
    system("COLOR 0C");
    break;
  case 6:
    system("COLOR 0E");
    break;
  case 0:
    opcor = -1;
    system("CLS");
    menu();
}
} while(opcor != -1);



}

  if (op == 0){
    return 0;
  }
}


  menu();

  return 0;
}
