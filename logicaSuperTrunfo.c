#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char cidade[100], cidade2[100], codigo[100], codigo2[100], estado[100], estado2[300];
    int populacao, populacao2,  turistico, turistico2, cidadePrimeira, cidadeSegunda;
    float area, area2, pib, pib2;
    float densidade, densidade2; 
    float capita, capita2;
    unsigned int  PrimeiraCidade;
    unsigned int  SegundaCidade;


    printf("Digite o seu Estado:  \n");
    scanf("%s" , &estado);

    printf("Digite o segundo Estado:  \n");
    scanf("%s" , &estado2);

    printf("Digite o Código: \n");
    scanf("%s" , &codigo);

    printf("Digite o segundo Código: \n");
    scanf("%s" , &codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s" , &cidade);

    printf("Digite sua segunda Cidade: \n");
    scanf("%s" , &cidade2);

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
     
    printf("Nome do Estado:  %s - Código: %s - Cidade: %s - População: %f - Area²: %f - PIB: %f - Turistico: %d\n"  , estado, codigo,  cidade, populacao,area, pib, turistico);
    printf("A média percapita é: %.2f\n", capita);
    printf("A média de  densidade populacional é: %.2f\n", densidade);
    printf("A soma da População + area + PIB é: %.6d\n" , PrimeiraCidade);
    printf("\n");
    printf("Nome do Estado2: %s - Código2: %s - Cidade2: %s - População2: %f -  2Area²: %f - PIB2: %f - 2Turistico: %d\n" , estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);
    printf("A média percapita é: %.2f\n", capita2);
    printf("A média de densidade populacional é: %.2f\n", densidade2);
    printf("A soma da População + area + PIB é: %.6d\n" , SegundaCidade);
    printf("\n");

    printf("Escolha uma opção para comparação\n");
    printf("1: PIB\n");
    printf("2: Área\n");
    printf("3: População\n");
    printf("4: Ponto turistico\n", cidade);
    printf("5: Média per capita\n");
    printf("6: Densidade\n");
    printf("7: Cidade\n");
    printf("Escolha: ");
    scanf("%d", &cidadePrimeira);

    switch (cidadePrimeira)
      {
        case 1:
        printf("%s: PIB -", cidade);
        break;

        case 2:
        printf("%s: Área -", cidade);
        break;

        case 3:
        printf("%s: População -", cidade);
        break;

        case 4:("%s: Ponto turistico -", cidade);
        break;

        case 5:
        printf("%s: Média Per capita -", cidade);
        break;

        case 6:
        printf("%s: Densidade -", cidade);
        break;

        case 7:
        printf("%s: Cidade -", cidade);
        break;

        default:
        printf("Opção invalida:\n");
        break;
      }

        switch (cidadeSegunda)
      {
        case 1:
        printf("%s: PIB -", cidade2);
        break;

        case 2:
        printf("%s: Área -", cidade2);
        break;

        case 3:
        printf("%s: População -", cidade2);
        break;

        case 4:("%s: Ponto turistico -", cidade2);
        break;

        case 5:
        printf("%s: Média Per capita -", cidade2);
        break;

        case 6:
        printf("%s: Densidade -", cidade2);
        break;

        case 7:
        printf("%s: Cidade -", cidade2);
        break;     
      }

      if (cidade == cidade2)
      {
        printf("***EMPATE***\n");
      }else if ((cidade))
      {
        printf(" %s GANHOU!!!",cidade);
      }else{
        printf(" %s PERDEU!!!", cidade);
      }



    






/*
   if(populacao > populacao2) {
        printf("A População de %s é maior que a População de %s!\n", cidade, cidade2);
    }else {
        printf("A População de %s é maior que a População de %s!\n", cidade2,cidade);
    }
    printf("\n");
    if (area > area2){
        printf("A área da cidade de %s é maior que área de %s!\n", cidade, cidade2);
    }else {
        printf("A área da cidade de %s é maior que área de %s!\n",cidade2,cidade);
    }
    printf("\n");
    if(pib>pib2){
        printf("O PIB da cidade %s é maior que da cidade %s!\n", cidade,cidade2);
    }else {
        printf("O PIB da cidade %s é maior que da cidade %s!\n",cidade2,cidade);
    }
    printf("\n");
    if(turistico>turistico2){
        printf("Na cidade de %s tem mais pontos turisticos que na cidade de %s!\n", cidade, cidade2);
    }else {
        printf("Na cidade de %s tem mais pontos turisticos que na cidade de %s!\n", cidade2, cidade);
    }
    printf("\n");
    if(densidade>densidade){
        printf("A densidade de %s é maior que %s!\n ", cidade,cidade2);
    }else{
        printf("A densidade %s é maior que %s!\n", cidade2,cidade);
    }
    printf("\n");
    if(capita>capita2) {
        printf("A médida per capta de %s é maior que à de %s!\n", cidade, cidade2);
    }else {
        printf("A médida per capta de %s é maior que à de %s!\n", cidade2,cidade);
    }
    printf("\n");
    if(PrimeiraCidade>SegundaCidade){
        printf("Soma de todos itens da cidade %s (%d) é maior que da cidade %s (%d)!\n", cidade,PrimeiraCidade,cidade2,SegundaCidade);
    }else{
        printf("Soma de todos itens da cidade %s (%d) é maior que da cidade %s (%d) !\n", cidade2,SegundaCidade,cidade,PrimeiraCidade);
    }
 */








    return 0;

}