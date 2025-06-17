#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta, carta2;
    char estado, estado2;
    char codigo_da_carta[4], codigo_da_carta2[4];
    char nome_da_cidade[38], nome_da_cidade2[38];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_percapita, pib_percapita2;
    float superpoder, superpoder2;
    int escolha;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Dados de inserção para primeira carta
    printf("Número da Carta: ");
    scanf("%d", &carta);

    printf("=================================================================\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    
    printf("=================================================================\n");
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    printf("Código da carta: ");
    scanf(" %[^\n]", codigo_da_carta);

    printf("=================================================================\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);

    printf("=================================================================\n");
    printf("O número de habitantes da cidade.\n");
    printf("População: ");
    scanf("%lu", &populacao);

    printf("=================================================================\n");
    printf("Área em km²: ");
    scanf("%f", &area);

    printf("=================================================================\n");
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("=================================================================\n");
    printf("A quantidade de pontos turísticos na cidade.\n");
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    
    // Dados de inserção para segunda carta
    printf("=================================================================\n");
    printf("Número da Carta: ");
    scanf("%d", &carta2);

    printf("=================================================================\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("=================================================================\n");
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    printf("Código da carta: ");
    scanf(" %[^\n]", codigo_da_carta2);

    printf("=================================================================\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("=================================================================\n");
    printf("O número de habitantes da cidade.\n");
    printf("População: ");
    scanf("%lu", &populacao2);

    printf("=================================================================\n");
    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("=================================================================\n");
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("=================================================================\n");
    printf("A quantidade de pontos turísticos na cidade.\n");
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Calculando Densidade Populacional e PIB per Capita

    densidade_populacional = (float) populacao / area;
    densidade_populacional2 = (float) populacao2 / area2;

    // Como pib está em bilhão multipliquei o valor por 10^9
    pib_percapita = (float) (pib * 1000000000) / populacao;
    pib_percapita2 = (float) (pib2 * 1000000000) / populacao2;
    superpoder = (float) populacao + area + (pib * 1000000000) + (float) numero_de_pontos_turisticos + pib_percapita - densidade_populacional;
    superpoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + (float) numero_de_pontos_turisticos2 + pib_percapita2 - densidade_populacional2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Valores da primeira carta
    printf("=================================================================\n");
    printf("Carta %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_percapita);
    printf("Super Poder: %.2f\n", superpoder);

    // Valores da segunda carta
    printf("=================================================================\n");
    printf("Carta %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Menu para escolher um atributo para comparar e determinar a carta vencedora
    printf("===== COMPARAÇÃO DE ATRIBUTOS =====\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("==========================\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            if(populacao > populacao2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: População");
                printf("\nCarta 1 População %ld", populacao);
                printf("\nCarta 2 População %ld", populacao2);
                printf("\nCarta Vencedora é: %d\n", carta);
            }
            else if(populacao < populacao2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: População");
                printf("\nCarta 1 População %ld", populacao);
                printf("\nCarta 2 População %ld", populacao2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: População");
                printf("\nCarta 1 População %ld", populacao);
                printf("\nCarta 2 População %ld", populacao2);
                printf("\nIMPATE\n");
            }
        case 2:
            if(area > area2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: Área");
                printf("\nCarta 1 Área %.2f: ", area);
                printf("\nCarta 2 Área %.2f: ", area2);
                printf("\nCarta Vencedora é: %d\n", carta);
            }else if(area < area2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: Área");
                printf("\nCarta 1 Área %.2f: ", area);
                printf("\nCarta 2 Área %.2f: ", area2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: Área");
                printf("\nCarta 1 Área %.2f: ", area);
                printf("\nCarta 2 Área %.2f: ", area2);
                printf("\nIMPATE\n");
            }
            break;
        case 3:
            if(pib > pib2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 PIB %.2f: ", pib);
                printf("\nCarta 2 PIB %.2f: ", pib2);
                printf("\nCarta Vencedora é: %d\n", carta);
                }
            else if(pib < pib2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 PIB %.2f: ", pib);
                printf("\nCarta 2 PIB %.2f: ", pib2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 PIB %.2f: ", pib);
                printf("\nCarta 2 PIB %.2f: ", pib2);
                printf("\nIMPATE\n");
            }
            break;
        case 4:
            if(pib > pib2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PONTOS TURISTICOS");
                printf("\nCarta 1 PONTOS TURISTICOS %d: ", numero_de_pontos_turisticos);
                printf("\nCarta 2 PONTOS TURISTICOS %d: ", numero_de_pontos_turisticos2);
                printf("\nCarta Vencedora é: %d\n", carta);
                }
            else if(pib < pib2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PONTOS TURISTICOS");
                printf("\nCarta 1 PONTOS TURISTICOS %d", numero_de_pontos_turisticos);
                printf("\nCarta 2 PONTOS TURISTICOS %d", numero_de_pontos_turisticos2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }    
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PONTOS TURISTICOS");
                printf("\nCarta 1 PONTOS TURISTICOS %d", numero_de_pontos_turisticos);
                printf("\nCarta 2 PONTOS TURISTICOS %d", numero_de_pontos_turisticos2);
                printf("\nIMPATE\n");
            }        
            break;
        case 5:
            if(densidade_populacional < densidade_populacional2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 Densidade Populacional %.2f: ", densidade_populacional);
                printf("\nCarta 2 Densidade Populacional %.2f: ", densidade_populacional);
                printf("\nCarta Vencedora é: %d\n", carta);
                }
            else if(densidade_populacional2 < densidade_populacional){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 Densidade Populacional %.2f: ", densidade_populacional);
                printf("\nCarta 2 Densidade Populacional %.2f: ", densidade_populacional2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB");
                printf("\nCarta 1 Densidade Populacional %.2f: ", densidade_populacional);
                printf("\nCarta 2 Densidade Populacional %.2f: ", densidade_populacional2);
                printf("\nIMPATE\n");
            }             
            break;
        case 6:
            if(pib_percapita > pib_percapita2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB PERCAPITA");
                printf("\nCarta 1 PIB per Capita %.2f: ", pib_percapita);
                printf("\nCarta 2 PIB per Capita %.2f: ", pib_percapita2);
                printf("\nCarta Vencedora é: %d\n", carta);
                }
            else if (pib_percapita < pib_percapita2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB PERCAPITA");
                printf("\nCarta 1 PIB per Capita %.2f: ", pib_percapita);
                printf("\nCarta 2 PIB per Capita %.2f: ", pib_percapita2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }   
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: PIB PERCAPITA");
                printf("\nCarta 1 PIB per Capita %.2f: ", pib_percapita);
                printf("\nCarta 2 PIB per Capita %.2f: ", pib_percapita2);
                printf("\nIMPATE!\n");
            }         
            break;
        case 7:
            if(superpoder > superpoder2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: SUPERPODER");
                printf("\nCarta 1 SUPERPODER %.2f: ", superpoder);
                printf("\nCarta 2 SUPERPODER %.2f: ", superpoder2);
                printf("\nCarta Vencedora é: %d\n", carta);
                }
            else if(superpoder < superpoder2){
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: SUPERPODER");
                printf("\nCarta 1 SUPERPODER %.2f: ", superpoder);
                printf("\nCarta 2 SUPERPODER %.2f: ", superpoder2);
                printf("\nCarta Vencedora é: %d\n", carta2);
            }            
            else{
                printf("\nEstado: %c", estado);
                printf("\nEstado2: %c", estado2);
                printf("\nAtributo Comparado: SUPERPODER");
                printf("\nCarta 1 SUPERPODER %.2f: ", superpoder);
                printf("\nCarta 2 SUPERPODER %.2f: ", superpoder2);
                printf("\nIMPATE!\n");
            }            
            break;
        default: printf("OPÇÃO INVÁLIDA!");
    }
    return 0;
}
