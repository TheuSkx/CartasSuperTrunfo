#include <stdio.h>

int main(){

    //declarando variáveis
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2;
    float pib1, pib2;
    float densidadeP1, pibpc1;
    float densidadeP2, pibpc2; 

    //cadastro da carta 1
    printf("Cadastro da carta 1\n\n");
    printf("Digite uma letra para o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%u", &populacao1);

    printf("Digite a área em km² : ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    densidadeP1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    //carta 1 cadastrada
    printf("\nA CARTA 1 FOI CADASTRADA\n\nCarta 1:\n");
    printf("\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %u\nÁrea: %.2fkm²\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidadeP1, pibpc1);

    //cadastro da carta 2
    printf("Cadastro da carta 2\n\n");
    printf("Digite uma letra para o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%u", &populacao2);

    printf("Digite a área em km² : ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    densidadeP2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    //carta 2 cadastrada
    printf("\nA CARTA 2 FOI CADASTRADA\n\nCarta 2:\n");
    printf("\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %u\nÁrea: %.2fkm²\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidadeP2, pibpc2);
    
    float superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibpc1;
    float superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibpc2;

    //comparação das cartas
    printf("***COMPARAÇÃO DAS CARTAS***\n");
    printf("POPULAÇÃO: ");
    if(populacao1 > populacao2){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("ÁREA: ");    
    
    if(area1 > area2 ){
        printf("carta 1 venceu !\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("PIB: ");    

    if(pib1 > pib2 ){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("PONTOS TURÍSTICOS: ");    
    
    if(turistico1 > turistico2){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("DENSIDADE POPULACIONAL: ");    
    
    if(densidadeP1 < densidadeP2){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("PIB PERCAPITA: ");    
    
    if(pibpc1 > pibpc2){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }    
    printf("SUPER PODER: ");    
    
    if(superpoder1 > superpoder2){
        printf("carta 1 venceu !!\n");
    } else {
        printf("carta 2 venceu !!\n");
    }
    return 0;
}