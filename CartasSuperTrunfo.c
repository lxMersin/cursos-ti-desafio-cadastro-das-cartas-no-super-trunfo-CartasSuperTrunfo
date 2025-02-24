#include <stdio.h>

#define MAX_CIDADES 100                           // Define uma constante com o valor 100, que limita o número de caracteres para o nome da cidade.

typedef struct {
    char estado;                               // Estado: letra de 'A' a 'H'
    char codigo[4];                           // Código da Carta: ex: A01, B02
    char nomeCidade[MAX_CIDADES];            // Nome da Cidade
    int populacao;                          // População
    float area;                            // Área em km²
    float pib;                            // PIB em bilhões de reais
    int pontosTuristicos;                // Número de Pontos Turísticos
} Carta;

void lerDadosCarta(Carta *carta, int numero) {
    printf("Insira os dados da Carta %d:\n", numero);
    
    printf("Estado (A-H): ");       // Solicita o estado.
    scanf(" %c", &carta->estado);  // Lê um caractere que representa o estado e armazena na estrutura. 
    
    printf("Código da Carta (ex: A01): ");   // Solicita o código da carta.
    scanf("%s", carta->codigo);             // Lê uma string e armazena no campo código da estrutura.
    
    printf("Nome da Cidade: ");     
    scanf(" %[^\n]", carta->nomeCidade); // Lê até a nova linha
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    
    printf("\n");
}

void exibirDadosCarta(Carta carta, int numero) {

    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("\n");
}

int main() {
    Carta cartas[2]; // Array para armazenar duas cartas

    for (int i = 0; i < 2; i++) {
        lerDadosCarta(&cartas[i], i + 1);
    }

    for (int i = 0; i < 2; i++) {
        exibirDadosCarta(cartas[i], i + 1);
    }

    return 0;
}
