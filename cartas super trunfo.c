#include <stdio.h> 
   int main (){
    int  Carta = 1 ;/* declaracao da variavel que vai  o numero da carta */
     char estado; /*declaração da letra inicial estado */
     char codigo [3] ;/* declaração da variavel que o codigo da  carta, tipo: A01 a B02 / cadeia de caracteres */
     char cidade [20]; /*nome da  cidade */ 
     int populacao; /* numero da polulação da cidade */
     float area , pib; /* vai ser solicitada a area em km  da cidade*/
     int turisticos ; /* para melhor entendimento resolvi separar as variaveis */


     
     printf("Vamos colocar os valores da carta , responda as seguintes perguntas: \n")

     printf("Escolha e digite uma letra de A a H: \n");
     scanf("%c" , &estado);

     printf("Crie codigo da  carta que é a letra do estado seguida de um número de 01 a 04 : \n ");
     scanf("%s", &codigo );

     printf("Digite o nome da cidade: \n");
     scanf("%s", &cidade);

     printf("Digite o número da população: \n ");
     scanf("%f" , &populacao);

     printf("Digite qual seria o tamanho da cidade em km; \n");
     scanf("%e" , &area);

     printf("Qual será o número do PIB:O Produto Interno Bruto da cidade: \n");
     scanf("%f" , &pib);

     printf("Qual será o número de pontos turísticos da cidade: \n ");
     scanf("%s" , turisticos);

     printf("carta:%d\n" , Carta );
     printf("Estado:%c \n" , estado);
     printf("Codigo:%s \n", codigo);
     printf("Nome da cidade:%s\n" , cidade);
     printf("População:%f\n" ,populacao);
     printf("Área:%e\n" , area);
     printf("PIB:%f\n", pib);
     printf("Número de pontos turísticos:%s\n", turisticos);


     return 0;
      }