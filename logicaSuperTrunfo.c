#include <stdio.h>



int main()
{

    char estado1[4],estado2[4], cidade1[30], cidade2[30];
    int area1, habitantes1, percapita1, numero_de_pontos_turisticos1;  // variavel da primeira cidade
    int area2, habitantes2, percapita2, numero_de_pontos_turisticos2; // variavel da segunda cidade
    int opcao;
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

    printf("\n-Cadastro feito com Sucesso:\n");
    printf("**********************************\n\n");



// Aqui começa o Jogo de comparaçao 

printf("Escolha A Estatistica a Ser comparada \n");
printf("1. Habitantes\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Renda Per capita\n");
printf("6. Densidade Populacional\n");
printf("7. Super Poder\n");
printf("Digite Sua Opcao: ");
scanf("%d", &opcao);


switch (opcao)
{
case 1: 
printf("------------- \nHABITANTES\n");

    if (habitantes1 > habitantes2) {
    printf("%s : %d Habitantes | %s : %d Habitantes\n",cidade1,habitantes1, cidade2, habitantes2);
    printf("%s Ganhou\n", cidade1);

    } else if (habitantes1 < habitantes2) {
    printf("%s : %d Habitantes | %s : %d Habitantes\n",cidade1,habitantes1, cidade2, habitantes2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %d Habitantes | %s : %d Habitantes\n",cidade1,habitantes1, cidade2, habitantes2);
        printf("Houve um Empate");
    }
    break;

case 2:
  printf("------------- \nAREA\n");

    if (area1 > area2) {
    printf("%s : %d m2 | %s : %d m2\n",cidade1,area1, cidade2, area2);
    printf("%s Ganhou\n", cidade1);

    } else if (area1 < area2) {
    printf("%s : %d m2 | %s : %d m2\n",cidade1,area1, cidade2, area2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %d m2 | %s : %d m2\n",cidade1,area1, cidade2, area2);
        printf("Houve um Empate");
    }

    break;
    
case 3:
  printf("------------- \nPIB\n");

    if (PIB1 > PIB2) {
    printf("%s : %li  | %s : %li \n",cidade1,PIB1, cidade2, PIB2);
    printf("%s Ganhou\n", cidade1);

    } else if (PIB1 < PIB2) {
    printf("%s : %li  | %s : %li \n",cidade1,PIB1, cidade2, PIB2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %li  | %s : %li \n",cidade1,PIB1, cidade2, PIB2);
        printf("Houve um Empate");
    }
    break;
    
case 4:
  printf("------------- \nPontos Turisticos\n");

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
    printf("%s : %d locais | %s : %d locais\n",cidade1,numero_de_pontos_turisticos1, cidade2, numero_de_pontos_turisticos2);
    printf("%s Ganhou\n", cidade1);

    } else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) {
    printf("%s : %d locais | %s : %d locais\n",cidade1,numero_de_pontos_turisticos1, cidade2, numero_de_pontos_turisticos2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %d locais | %s : %d locais\n",cidade1,numero_de_pontos_turisticos1, cidade2, numero_de_pontos_turisticos2);
        printf("Houve um Empate");
    }
    break;
    
case 5:
printf("------------- \n Renda per capita\n");
percapita1 = PIB1 / habitantes1;
percapita2 = PIB2 / habitantes2;

    if (percapita1 > percapita2) {
    printf("%s : %d  | %s : %d \n",cidade1,percapita1, cidade2, percapita2);
    printf("%s Ganhou\n", cidade1);

    } else if (percapita1 < percapita2) {
    printf("%s : %d  | %s : %d \n",cidade1,percapita1, cidade2, percapita2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %d  | %s : %d \n",cidade1,percapita1, cidade2, percapita2);
        printf("Houve um Empate");  
    }
    break;

case 6:
  printf("------------- \n Densidade Populacional \n");

densidade1 = habitantes1 / area1 ;
densidade2 = habitantes2 / area2 ;

    if (densidade1 < densidade2) {
    printf("%s : %.2f | %s : %.2f \n",cidade1,densidade1, cidade2, densidade2);
    printf("%s Ganhou , possui uma densidade menor\n", cidade1);

    } else if (densidade1 > densidade2) {
    printf("%s : %.2f  | %s : %.2f \n",cidade1,densidade1, cidade2, densidade2);
    printf("%s Ganhou, possui uma densidade menor\n", cidade2);
    } else {
        printf("%s : %.2f  | %s : %.2f \n",cidade1,densidade1, cidade2, densidade2);
        printf("Houve um Empate");
}   
    break;

case 7:
printf("------------- \n Super Poder\n");
printf("-- Todos os atributos somados , menos densidade populacional--\n");
soma1 = (habitantes1 + area1 + PIB1 + numero_de_pontos_turisticos1);
soma2 = (habitantes2 + area2 + PIB2 + numero_de_pontos_turisticos2);

    if (soma1 > soma2) {
    printf("%s : %d  | %s : %d \n",cidade1,soma1, cidade2, soma2);
    printf("%s Ganhou\n", cidade1);

    } else if (soma1 < soma2) {
    printf("%s : %d  | %s : %d \n",cidade1,soma1, cidade2, soma2);
    printf("%s Ganhou\n", cidade2);
    } else {
        printf("%s : %d  | %s : %d \n",cidade1,soma1, cidade2, soma2);
        printf("Houve um Empate");
}  
    break;

default:
printf("Opcao invalida!!");
    break;
}
/*
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


    
    printf("\n\nFinalizado,Obrigado.\n");*/

    return 0;
    
}
