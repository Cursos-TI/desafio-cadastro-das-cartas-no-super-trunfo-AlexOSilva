#include <stdio.h>
int main() {

   //Comparação dos atributos das cartas 1 e 2(População, Área ,PIB e Densidade Populacional )

   printf("\n***Comparação dos atributos das cartas 1 e 2***\n");
   unsigned int compopu1 = 600000 ; // Definindo variavel e o seu valor
   unsigned int compopu2 = 400000 ;

   printf("\n***Comparação das cartas (Atributo: População)***\n");
   printf("\nCarta 1 - São Paulo : 600000");
   printf("\nCarta 2 - Rio de Janeiro : 400000\n");


   if(compopu1 > compopu2) {  //Realizando a comparação
       printf("A Carta  1 (São Paulo)venceu\n"); //Exibindo resultado
   
   } else {
       printf("A Carta 2 (Rio de Janeiro) venceu\n");
   }

   printf("\n***Comparação das cartas (Atributo: Àrea)***\n");
   printf("\nCarta 1 - São Paulo : 4456.23 km²");
   printf("\nCarta 2 - Rio de Janeiro : 6465.56 km²\n");

   float compare1 = 4456.23 ;
   float compare2 = 6465.56 ;

   if(compare1 > compare2) {
    printf("A Carta  1 (São Paulo)venceu\n");

} else {
    printf("A Carta 2 (Rio de Janeiro) venceu\n");
}

    printf("\n***Comparação das cartas (Atributo: PIB)***\n");
   printf("\nCarta 1 - São Paulo : 600.50 bilhões");
   printf("\nCarta 2 - Rio de Janeiro : 500.60 bilhões\n");

   float comppib1 = 600.50 ;
   float comppib2 = 500.60 ;

   if(comppib1 > comppib2) {
    printf("A Carta  1 (São Paulo)venceu\n");

} else {
    printf("A Carta 2 (Rio de Janeiro) venceu\n");
}

printf("\n***Comparação das cartas (Atributo: Densidade Populacional)***\n");
printf("\nCarta 1 - São Paulo :3200");
printf("\nCarta 2 - Rio de Janeiro : 1600\n");

float compden1 = 3200;
float compden2 = 1600 ;

if(compden1 < compden2) { // menor valor vence
 printf("A Carta  1 (São Paulo)venceu\n");

} else {
 printf("A Carta 2 (Rio de Janeiro) venceu\n");
}

//Menu interativo pra escolha dos atributos;

int opcao; 
float comptur1 = 600;
float comptur2 = 800 ;

printf("\n***Escolha o atributo para comparação***\n");
printf("\n###Carta 1: São Paulo vs  Carta 2: Rio de Janeiro###\n");
printf("Digite 1. População\n");
printf("Digite 2. Área\n");
printf("Digite 3. PIB\n");
printf("Digite 4. Números de pontos turísticos\n");
printf("Digite 5. Densidade Populacional\n");
scanf("%d", &opcao);


switch(opcao) {
    case 1:

   
    printf("\nComparação da População:\n");
    printf("Carta 1 -  São Paulo : %lu habitantes\n", compopu1);
    printf("Carta 2 - Rio de Janeiro : %lu habitantes\n", compopu2);
    if(compopu1 > compopu2){
        printf("Carta 1 venceu!! A cidade com maior população é São Paulo.\n");
    }else if(compopu1 < compopu2){
        printf("Carta 2 venceu!! A cidade com maior população é Rio de Janeiro .\n" );
    }else{
        printf("Empate! As cartas têm a mesma quantidade de população.\n");
    }
    break;

    case 2 :

    printf("\nComparação da Área:\n");
    printf("Carta 1 -  São Paulo : %.2f km²\n", compare1);
    printf("Carta 2 - Rio de Janeiro : %.2f km²\n", compare2);
    if(compare1 > compare2){
        printf("Carta 1 venceu!! A cidade com maior área é São Paulo.\n");
    }else if(compare1 < compare2){
        printf("Carta 2 venceu!! A cidade com maior área é Rio de Janeiro .\n" );
    }else{
        printf("Empate! As cartas têm a mesma área.\n");
    }
    break;

    case 3 :

    printf("\nComparação do PIB:\n");
    printf("Carta 1 -  São Paulo : %.2f bilhões de reais \n", comppib1);
    printf("Carta 2 - Rio de Janeiro : %.2f bilhões de reais\n", comppib2);
    if(comppib1 > comppib2){
        printf("Carta 1 venceu!! A cidade com maior área é São Paulo.\n");
    }else if(comppib1 < comppib2){
        printf("Carta 2 venceu!! A cidade com maior área é Rio de Janeiro .\n" );
    }else{
        printf("Empate! As cartas têm a mesma área.\n");
    }
    break;

    case 4:

    printf("\nComparação dos Pontos Turísticos:\n");
    printf("Carta 1 -  São Paulo : %.2f pontos turisticos \n", comptur1);
    printf("Carta 2 - Rio de Janeiro : %.2f pontos turisticos\n", comptur2);
    if(comptur1 > comptur2){
        printf("Carta 1 venceu!! A cidade com maior pontos turisticos é São Paulo.\n");
    }else if(comptur1 < comptur2){
        printf("Carta 2 venceu!! A cidade com maior pontos turisticos é Rio de Janeiro .\n" );
    }else{
        printf("Empate! As cartas têm a mesma  quantidade de pontos turisticos.\n");
    }
    break;

    case 5:

    printf("\nComparação da Densidade Demográfica:\n");
    printf("Carta 1 -  São Paulo : %.2f habitantes/km² \n", compden1);
    printf("Carta 2 - Rio de Janeiro : %.2f habitantes/km²\n", compden2);
    if(compden1 < compden2){
        printf("Carta 1 venceu!! A cidade com menor densidade populacional é São Paulo.\n");
    }else if(compden1 > compden2){
        printf("Carta 2 venceu!! A cidade com menor densidade populacional é Rio de Janeiro .\n" );
    }else{
        printf("Empate! As cartas têm a mesma quantidade de  densidade populacional\n");
    }
    break;

    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;

}





