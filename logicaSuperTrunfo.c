#include <stdio.h>

int main(){
    char cidade[100], cidade2[100], codigo[100], codigo2[100], estado[100], estado2[300];
    int populacao, populacao2,  turistico, turistico2, opcao;
    float area, area2, pib, pib2;
    float densidade, densidade2; 
    float capita, capita2;
    unsigned int  PrimeiraCidade;
    unsigned int  SegundaCidade;


    printf("Digite o seu Estado:  \n");
    scanf("%s" , estado);

    printf("Digite o segundo Estado:  \n");
    scanf("%s" , estado2);

    printf("Digite o Código: \n");
    scanf("%s" , codigo);

    printf("Digite o segundo Código: \n");
    scanf("%s" , codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s" , cidade);

    printf("Digite sua segunda Cidade: \n");
    scanf("%s" , cidade2);
    printf("Digite o PIB: \n");
    scanf("%f" , &pib);

    printf("Digite o PIB2: \n");
    scanf("%f" , &pib2);
    
    printf("Digite a área²: \n");
    scanf("%f" , &area);

    printf("Digite a 2área²: \n");
    scanf("%f" , &area2);

    printf("Digite a População: \n");
    scanf("%d" , &populacao);
    
    printf("Digite a segunda População: \n");
    scanf("%d" , &populacao2);

    printf("Digite quantos pontos turisticos na Primeira Cidade: \n");
    scanf("%d" , &turistico);

    printf("Digite quantos pontos turisticos na Segunda Cidade: \n");
    scanf("%d" , &turistico2);


    capita = pib/populacao;
    capita2 = pib2/populacao2;

    densidade = populacao/area;
    densidade2 = populacao2/area2; 

    PrimeiraCidade =  populacao + area + pib;
    SegundaCidade = populacao2 + area2 + pib2;
     
    printf("Nome do Estado:  %s - Código: %s - Cidade: %s - População: %d - Area²: %f - PIB: %f - Turistico: %d\n"  , estado, codigo,  cidade, populacao,area, pib, turistico);
    printf("A média percapita é: %.2f\n", capita);
    printf("A média de  densidade populacional é: %.2f\n", densidade);
    printf("A soma da População + area + PIB é: %.6d\n" , PrimeiraCidade);
    printf("\n");
    printf("Nome do Estado2: %s - Código2: %s - Cidade2: %s - População2: %d -  2Area²: %f - PIB2: %f - 2Turistico: %d\n" , estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);
    printf("A média percapita é: %.2f\n", capita2);
    printf("A média de densidade populacional é: %.2f\n", densidade2);
    printf("A soma da População + area + PIB é: %.6d\n" , SegundaCidade);
    printf("\n");

    printf("Escolha uma opção para comparação\n");
    printf("1: PIB\n");
    printf("2: Área\n");
    printf("3: População\n");
    printf("4: Ponto turístico\n");
    printf("5: Média per capita\n");
    printf("6: Densidade\n");
    printf("7: Cidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
      case 1:
            printf("Comparando PIB:\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, pib, cidade2, pib2);
            if (pib > pib2)
                printf("%s venceu!\n", cidade);
            else if (pib < pib2)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

            case 2:
            printf("Comparando ÁREA:\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, area, cidade2, area2);
            if (area > area2)
                printf("%s venceu!\n", cidade);
            else if (area < area2)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;


            case 3:
            printf("Comparando POPULAÇÃO:\n");
            printf("%s: %.2d | %s: %.2d\n", cidade, populacao, cidade2, populacao2);
            if (populacao > populacao2)
                printf("%s venceu!\n", cidade);
            else if (populacao < populacao2)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;


            case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %.2d | %s: %.2d\n", cidade, turistico, cidade2, turistico2);
            if (turistico > turistico2)
                printf("%s venceu!\n", cidade);
            else if (turistico < turistico2)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

            case 5:
            printf("Comparando Média Per Capita:\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, capita, cidade2, capita2);
            if (capita > capita2)
                printf("%s venceu!\n", cidade);
            else if (capita < capita2)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;


            case 6:
            printf("Comparando Desidade Demográfica:\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, densidade, cidade2, densidade2);
            if (densidade > densidade2)
                printf("%s venceu!\n", cidade2);
            else if (densidade < densidade2)
                printf("%s venceu!\n", cidade);
            else
                printf("Empate!\n");
            break;


            case 7:
            printf("Comparando Cidades:\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, PrimeiraCidade, cidade2, SegundaCidade);
            if (PrimeiraCidade > SegundaCidade)
                printf("%s venceu!\n", cidade);
            else if (PrimeiraCidade < SegundaCidade)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

             default:
            printf("Opção inválida!\n");

    }


    return 0;

}