#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Dados das duas cartas
    int carta, carta2;
    char estado, estado2;
    char codigo_da_carta[4], codigo_da_carta2[4];
    char nome_da_cidade[38], nome_da_cidade2[38];

    long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;

    float densidade_populacional, densidade_populacional2;
    float pib_percapita, pib_percapita2;
    float superpoder, superpoder2;

    //Para comparação
    int escolha, escolha2;
    char *nome_atributo1, *nome_atributo2;
    double carta1_valor_atributo1, carta1_valor_atributo2, carta2_valor_atributo1, carta2_valor_atributo2;
    double carta1_soma, carta2_soma;
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
    scanf("%ld", &populacao);

    printf("=================================================================\n");
    printf("Área em km²: ");
    scanf("%f", &area);

    printf("=================================================================\n");
    printf("PIB (Em Bilhões): ");
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
    printf("PIB (Em Bilhões): ");
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
    printf("===== 1º COMPARAÇÃO DE ATRIBUTOS =====\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("==========================\n");
    scanf(" %d", &escolha);

    //Menu para escolher segundo atributo, não podendo ser o escolhido anteriormente
    printf("===== 2º COMPARAÇÃO DE ATRIBUTOS =====\n");
    if(escolha != 1) printf("1. População\n");
    if(escolha != 2) printf("2. Área\n");
    if(escolha != 3) printf("3. PIB\n");
    if(escolha != 4) printf("4. Número de Pontos Turísticos\n");
    if(escolha != 5) printf("5. Densidade Populacional\n");
    if(escolha != 6) printf("6. PIB per Capita\n");
    if(escolha != 7) printf("7. Super Poder\n");
    printf("==========================\n");
    scanf(" %d", &escolha2);

    //Caso as Opções sejam iguais ira retornar um erro
    if(escolha == escolha2){
        printf("ERRO! VALORES DE ATRIBUTOS DEVEM SER DIFERENTES\n");
    }else{
        //Implementando switch para atribuir os nomes de atributos e valores, de cada carta.
        switch(escolha){
            case 1:
                nome_atributo1 = "População";
                carta1_valor_atributo1 = populacao;
                carta2_valor_atributo1 = populacao2;
                break;
            case 2:
                nome_atributo1 = "Área";
                carta1_valor_atributo1 = area;
                carta2_valor_atributo1 = area2;
                break;
            case 3:
                nome_atributo1 = "PIB";
                carta1_valor_atributo1 = (pib * 1000000000);
                carta2_valor_atributo1 = (pib2 * 1000000000);
                break;
            case 4:
                nome_atributo1 = "Nº Pontos Turísticos";
                carta1_valor_atributo1 = numero_de_pontos_turisticos;
                carta2_valor_atributo1 = numero_de_pontos_turisticos2;
                break;
            case 5:
                nome_atributo1 = "Densidade Populacional";
                carta1_valor_atributo1 = densidade_populacional;
                carta2_valor_atributo1 = densidade_populacional2;
                break;
            case 6:
                nome_atributo1 = "PIB per Capita";
                carta1_valor_atributo1 = pib_percapita;
                carta2_valor_atributo1 = pib_percapita2;
                break;
            case 7:
                nome_atributo1 = "Super Poder";
                carta1_valor_atributo1 = superpoder;
                carta2_valor_atributo1 = superpoder2;
                break;
            default:
                printf("Opção inválida!\n");
                return 1;
        }
        switch(escolha2){
            case 1:
                nome_atributo2 = "População";
                carta1_valor_atributo2 = populacao;
                carta2_valor_atributo2 = populacao2;
                break;
            case 2:
                nome_atributo2 = "Área";
                carta1_valor_atributo2 = area;
                carta2_valor_atributo2 = area2;
                break;
            case 3:
                nome_atributo2 = "PIB";
                carta1_valor_atributo2 = (pib * 1000000000);
                carta2_valor_atributo2 = (pib2 * 1000000000);
                break;
            case 4:
                nome_atributo2 = "Nº Pontos Turísticos";
                carta1_valor_atributo2 = numero_de_pontos_turisticos;
                carta2_valor_atributo2 = numero_de_pontos_turisticos2;
                break;
            case 5:
                nome_atributo2 = "Densidade Populacional";
                carta1_valor_atributo2 = densidade_populacional;
                carta2_valor_atributo2 = densidade_populacional2;
                break;
            case 6:
                nome_atributo2 = "PIB per Capita";
                carta1_valor_atributo2 = pib_percapita;
                carta2_valor_atributo2 = pib_percapita2;
                break;
            case 7:
                nome_atributo2 = "Super Poder";
                carta1_valor_atributo2 = superpoder;
                carta2_valor_atributo2 = superpoder2;
                break;
            default:
                printf("Opção inválida!\n");
                return 1;
        }     
       
        // Exibição dos valores dos Atributos
        printf("Estado: %c\n", estado);
        printf("Estado2: %c\n", estado2);
        printf("Atributos Comparados: %s E %s\n", nome_atributo1, nome_atributo2);
        printf("Carta 1 Atributo: %s - Valor: %.2f\n", nome_atributo1, carta1_valor_atributo1);
        printf("Carta 1 Atributo: %s - Valor: %.2f\n", nome_atributo2, carta1_valor_atributo2);
        printf("Carta 2 Atributo: %s - Valor: %.2f\n", nome_atributo1, carta2_valor_atributo1);
        printf("Carta 2 Atributo: %s - Valor: %.2f\n", nome_atributo2, carta2_valor_atributo2);
        printf("====== COMPARAÇÃO DE ATRIBUTOS ======\n");
        
        //Caso um dos atributos seja densidade populacional irá implentar uma lógica diferente de comparação
        if(strcmp(nome_atributo1, "Densidade Populacional") == 0 || strcmp(nome_atributo2, "Densidade Populacional") == 0){
            // 1º atributo
            if (strcmp(nome_atributo1, "Densidade Populacional") == 0) {

                //Densidade Populacional
                if (carta1_valor_atributo1 < carta2_valor_atributo1)
                    printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta);
                else if (carta1_valor_atributo1 > carta2_valor_atributo1)
                    printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta2);
                else
                    printf("%s: EMPATE\n", nome_atributo1);
                
                // Valores dos atributos 2º
                if(carta1_valor_atributo2 > carta2_valor_atributo2){
                    printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta);
                }
                else if(carta1_valor_atributo2 < carta2_valor_atributo2){
                    printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta2);
        
                }
                else{
                    printf("%s: EMPATE!\n", nome_atributo2);
                }
                // Modificando valor para um número negativo, de acordo com a lógica inversa
                carta1_valor_atributo1 *= -1;
                carta2_valor_atributo1 *= -1;

            }

            // 2º atributo
            else if (strcmp(nome_atributo2, "Densidade Populacional") == 0) {

                // Valores dos atributos 1º
                if(carta1_valor_atributo1 > carta2_valor_atributo1){
                    printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta);
                }
                else if(carta1_valor_atributo1 < carta2_valor_atributo1){
                    printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta2);
        
                }
                else{
                    printf("%s: EMPATE!\n", nome_atributo1);
                }

                //Densidade Populacional
                if (carta1_valor_atributo2 < carta2_valor_atributo2)
                    printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta);
                else if (carta1_valor_atributo2 > carta2_valor_atributo2)
                    printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta2);
                else
                    printf("%s: EMPATE\n", nome_atributo2);
                
                // Modificando valor para um número negativo, de acordo com a lógica inversa
                carta1_valor_atributo2 *= -1;
                carta2_valor_atributo2 *= -1;
            }
        }
        else{
            if(carta1_valor_atributo1 > carta2_valor_atributo1){
                printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta);
            }
            else if(carta1_valor_atributo1 < carta2_valor_atributo1){
                printf("%s: Vencedor %s\n", nome_atributo1, codigo_da_carta2);
    
            }
            else{
                printf("%s: EMPATE!\n", nome_atributo1);
            }
            if(carta1_valor_atributo2 > carta2_valor_atributo2){
                printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta);
            }
            else if(carta1_valor_atributo2 < carta2_valor_atributo2){
                printf("%s: Vencedor %s\n", nome_atributo2, codigo_da_carta2);
    
            }
            else{
                printf("%s: EMPATE!\n", nome_atributo2);
            }
        }
        
        // Lógica final para soma dos atributos das cartas
        carta1_soma = carta1_valor_atributo1 + carta1_valor_atributo2;
        carta2_soma = carta2_valor_atributo1 + carta2_valor_atributo2;
        if(carta1_soma > carta2_soma){
            printf("Carta Vencedora é: %d\n", carta);
        }
        else if(carta1_soma < carta2_soma){
            printf("Carta Vencedora é: %d\n", carta2);
        }
        else{
            printf("EMPATE\n");
        }
    }
    return 0;
}
