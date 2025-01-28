#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[4],estado2[4], cidade1[30], cidade2[30];
    int area1, habitantes1, percapita1, numero_de_pontos_turisticos1;  // variavel da primeira cidade
    int area2, habitantes2, percapita2, numero_de_pontos_turisticos2; // variavel da segunda cidade
    long PIB1, PIB2;
    float densidade1, densidade2, soma1, soma2;

            // Cadastro dos dados (sera dividido em duas seçoes)
   
    printf("Cadastros de carta SuperTrunfo.\n");
    printf("***********************\n");
 
            // Cadastro da primeira cidade
   
    printf("Primeira cidade: ");
    scanf(" %30[^\n]", cidade1); // usado esse formato pois algumas cidades possuem espaço
    //fgets(cidade1, 20, stdin);

    printf("Sigla do estado: ");
    scanf(" %s", estado1);

    printf("Habitantes: ");
    scanf(" %d", &habitantes1);

    printf("Area: ");
    scanf(" %d", &area1);

    printf("PIB: ");
    scanf(" %li", &PIB1);

    printf("Pontos turisticos : ");
    scanf(" %d", &numero_de_pontos_turisticos1);

    printf("\nCadastro feito com sucesso\n\n");

            //Cadastro da segunda carta

    printf("Segunda cidade: ");
    scanf(" %30[^\n]", cidade2); // usado esse formato pois algumas cidades possuem espaço
    //fgets(cidade1, 20, stdin);

    printf("Sigla do Estado: ");
    scanf(" %s", estado2);

    printf("Habitantes: ");
    scanf(" %d", &habitantes2);

    printf("Area: ");
    scanf(" %d", &area2);

    printf("PIB: ");
    scanf(" %li", &PIB2);

    printf("Pontos Turisticos: ");
    scanf(" %d", &numero_de_pontos_turisticos2);

        // a partir daqui sera feita a impressão dos resultados

    printf("\n-Cadastro feito com Sucesso:\n");
    printf("**********************************\n\n");

        // Resultado da PRIMEIRA cidade

    printf("Cidade 1: %s - %s\n", cidade1, estado1);
    printf("Habitantes: %d\n", habitantes1);
    printf("A area da cidade é: %d\n", area1);
    printf("O PIB da cidade: %li\n", PIB1);
    printf("A Quantidade de Pontos turisticos: %d\n", numero_de_pontos_turisticos1);
        densidade1 = habitantes1 / area1 ;
    printf("A Densidade Populacional da cidade %s é: ", cidade1);
    printf("%.2f\n", densidade1);
        percapita1 = PIB1 / habitantes1;
    printf("A Renda percapita dessa cidade é:");
    printf("%d\n", percapita1);

    printf("\n---------------\n\n"); //SEPARADOR
    
            // Resultado da SEGUNDA cidade

    printf("Cidade 2: %s - %s\n", cidade2, estado2);
    printf("Habitantes: %d\n", habitantes2);
    printf("A area da cidade é: %d\n", area2);
    printf("O PIB da cidade: %li\n", PIB2);
    printf("A Quantidade de Pontos turisticos: %d\n", numero_de_pontos_turisticos2);
        densidade2 = habitantes2 / area2 ;
    printf("A Densidade Populacional da cidade %s é: ", cidade2);
    printf("%.2f\n", densidade2);
        percapita2 = PIB2 / habitantes2;
    printf("A Renda percapita dessa cidade é: ");
    printf("%d\n", percapita2);
       

    printf("\n\nSUPER PODERES:\n");
    printf("Aqui todos os atributos das cidades serao somados\n");
    printf("-----\n");

    soma1 = (habitantes1 + area1 + PIB1 + numero_de_pontos_turisticos1);
    printf("%s tem o poder de: %.2f\n", cidade1 , soma1);

    soma2 = (habitantes2 + area2 + PIB2 + numero_de_pontos_turisticos2);
    printf("%s tem o poder de: %.2f\n", cidade2 , soma2);

    printf("\nResutado:\n"); // O resultado é baseado na cidade com menor densidade populacional

    if(densidade1 < densidade2) {                   //se densidade1 for maior que densidade2
    printf("%s é a vencedora pois tem a densidade populacional menor !\n", cidade1);
    } else if (densidade1 > densidade2) {           //se densidade1 for menor que densidade2
    printf("%s é a vencedora pois tem a densidade populacional menor !\n", cidade2);
    } else {                                        //se o resultado for diferente, considerar empate
    printf("Incrivel... Deu empate \n");
    }


    
    printf("\n\nFinalizado,Obrigado.\n");

    return 0;
    
}
