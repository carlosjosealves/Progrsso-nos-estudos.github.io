#include <stdio.h>
#include <stdlib.h>

  int main(){
   char player[256];
   char player2[256];

    printf("\nplayer 1 e sua vez.");
    scanf("%s",player);

    printf("\nplayer 2 e sua vez.");
    scanf("%s",player2);

    printf("\naguarde estamos processando sua resposta...");

    if(strcmp(player,"papel")==0)
   { 
    if(strcmp(player2,"papel")==0){
    printf("empate!");
   }else if (strcmp(player2,"tesoura")==0){
    printf("player 2 ganhou, tesoura corta papel.");
   }else if(strcmp(player2,"pedra")==0){
    printf("player 1 ganhou, papel enbrulh/ganha da pedra.");
   }else{
    printf("Resposta invalida.");
   }

   }else if(strcmp(player,"tesoura")==0){
      
     
    if(strcmp(player2,"tesoura")==0){
    printf("empate!");
   }else if (strcmp(player2,"papel")==0){
    printf("player 2 ganhou, tesoura corta papel.");
   }else if(strcmp(player2,"pedra")==0){
    printf("player 1 ganhou, papel enbrulha/ganha da pedra.");
   }else{
    printf("Resposta invalida.");
   }

   }else if(strcmp(player,"pedra")==0){
    if(strcmp(player2,"pedra")==0){
      printf("Empate!");
    }else if(strcmp(player2,"tesoura")==0){
      printf("player 1 ganhou, pedra quebra tsoura.");
    }else if(strcmp(player2,"papel")==0){
      printf("player 2 ganhou, papel enbrulha/ganha da pedra.");
    }else{
      printf("Resposta invalida!");
    }
   }else{
    printf("Resposta invalida.");
   }
    return 0;
  }

  
 
   
 
 

  
  



 