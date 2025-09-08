#include <stdio.h>  // Biblioteca padrão para entrada e saída (printf, scanf)

int main() {
    // ==========================
    // Variáveis da Carta 1
    // ==========================
    char estado1;          // Armazena a letra do estado da carta 1 (A-H)
    char codigo1[4];       // Armazena o código da carta 1 (ex: A01), 3 caracteres + '\0'
    char cidade1[50];      // Nome da cidade da carta 1 (máximo 49 caracteres + '\0')
    int populacao1;        // Número de habitantes da cidade da carta 1
    float area1;           // Área da cidade da carta 1 em km²
    float pib1;            // PIB da cidade da carta 1 em bilhões
    int pontosTuristicos1; // Quantidade de pontos turísticos da cidade da carta 1

    // ==========================
    // Variáveis da Carta 2
    // ==========================
    char estado2;          
    char codigo2[4];       
    char cidade2[50];      
    int populacao2;        
    float area2;           
    float pib2;            
    int pontosTuristicos2; 

    // ==========================
    // Entrada de dados - Carta 1
    // ==========================
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c ignora ENTERs sobrando do teclado

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);   // Lê uma string (nome do código), sem usar & porque é array

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade1);   // Lê uma string (nome da cidade), sem espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1); // Lê um inteiro, por isso usamos &

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);      // Lê um float, usamos &

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib1);       // Lê um float, usamos &

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1); // Lê um inteiro, usamos &

    // ==========================
    // Entrada de dados - Carta 2
    // ==========================
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite a letra do estado (A - H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // ==========================
    // Exibição dos dados da Carta 1
    // ==========================
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // ==========================
    // Exibição dos dados da Carta 2
    // ==========================
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    //Comentarios adicionais : Arrays (char codigo1[4]) precisam de espaço extra para o \0 que marca o fim da string. 
    /*1 - Espaço antes de %c no scanf evita que o ENTER anterior seja lido como entrada.
      2 - Para tipos simples (int, float, char) usamos & no scanf.
      3 - Para strings (char[]), não usamos &, pois o nome do array já é o endereço inicial.*/

    return 0; // Encerra o programa
}

