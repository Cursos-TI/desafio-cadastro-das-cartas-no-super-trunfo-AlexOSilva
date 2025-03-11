#include <stdio.h>

//Desafio super trunfo - Países 
//Tema 1 - Cadastro das Cartas

int main() {

//Informações da carta 
char codigo1[50] , codigo2[50]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
char estado1[50] , estado2[50]  ; // O nome do Estado
char cidade1[50] , cidade2[50] ; // O nome da cidade
unsigned long int populacao1 , populacao2 ; // O número de habitantes da cidade
int pontosturisticos1 , pontosturisticos2 ; //A quantidade de pontos turísticos na cidade
float area1 , area2 ; //A área da cidade em quilômetros quadrados
float pib1 , pib2 ; //O Produto Interno Bruto da cidade

////Utilizada  a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
printf("Super Trunfo - Países\n");
printf("Carta  1\n");

printf("Digite o estado(ex:Amazonas): ");
scanf("%s" , estado1); 

printf("Digite o código(ex:A01): ") ;
scanf("%s" , codigo1) ;

printf("Digite o nome da cidade(ex: Manaus): ");
scanf(" %s" , cidade1) ;

printf("Digite a população (ex:50000) cinquenta mil: "); 
scanf(" %ld" , &populacao1) ;

printf("Digite os números de pontos turísticos (ex: 10): ");
scanf("%d" , &pontosturisticos1) ; 

printf("Digite o Pib(ex: 700.28) bilhões: "); 
scanf("%f", &pib1); 

printf("Digite a área(ex:1521.11) km²: ") ;
scanf("%f" , &area1) ; 

//Imprimindo a carta 1
printf("\nSuper trunfo - Carta 1: \n") ; 
printf("Estado: %s\n" , estado1) ;
printf("Código: %s\n " , codigo1) ;
printf("Cidade: %s\n" , cidade1) ;
printf("População: %ld\n" , populacao1);
printf("Pontos Turísticos: %d\n" , pontosturisticos1);
printf("PIB: %.2f bilhões de reais\n" , pib1) ;
printf("Àrea Km2: %.2f\n" , area1) ;

printf("\nSuper Trunfo - Países\n");
printf("Carta  2\n");

printf("Digite o estado(ex:Amazonas): ");
scanf("%s" , estado2); 

printf("Digite o código(ex:A01): ");
scanf("%s" , codigo2);

printf("Digite o nome da cidade(ex: Manaus): ");
scanf("%s" , cidade2) ;

printf("Digite a população (ex:50000) cinquenta mil: "); 
scanf(" %ld" , &populacao2) ;

printf("Digite os números de pontos turísticos (ex: 10): ");
scanf("%d" , &pontosturisticos2) ; 

printf("Digite o Pib(ex: 700.28) bilhões: "); 
scanf("%f", &pib2); 

printf("Digite a área(ex:1521.11) km²: ") ;
scanf("%f" , &area2) ; 

//Imprimindo a carta 2
printf("\nSuper trunfo - Carta 2: \n") ; 
printf("Estado: %s\n" , estado2) ;
printf("Código:%s\n " , codigo2) ;
printf("Cidade: %s\n" , cidade2) ;
printf("População: %ld\n" , populacao2);
printf("Pontos Turísticos: %d\n" , pontosturisticos2);
printf("PIB: %.2f bilhões de reais\n" , pib2) ;
printf("Àrea Km2: %.2f\n" , area2) ;

//Calcular a Densidade Populacional Carta 1
printf("\n***Cáculo da Densidade populacional da carta 1***\n");
float densidade1 = (float) populacao1 / area1;
printf("\nA Densidade populacional da carta 1 é : %.2f\n" , densidade1);

//Calcular o PIB per Capita Carta 1
printf("\n***Cáculo do PIB per Capita da carta 1***\n");
float pibcap1= (float) (pib1* 1e9) / populacao1;
printf("\nO PIB per Capita da carta 1 é : %.2f\n reais" , pibcap1);

//Calcular a Densidade Populacional Carta 2
printf("\n***Cáculo da Densidade populacional da carta 2***\n");
float densidade2 = (float) populacao2 / area2;
printf("\nA Densidade populacional da carta 2 é : %.2f\n" , densidade2);

//Calcular o PIB per Capita Carta 2
printf("\n***Cáculo do PIB per Capita da carta 2***\n");
float pibcap2 = (float) (pib2* 1e9)/populacao2;
printf("\nO PIB per Capita da carta 2 é : %.2f\n reais" , pibcap2);

//Calcular o Super Poder

printf("\n***Cáculo do Super Poder da Carta 1***\n");
float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibcap1 + (1.0f / densidade1);
printf(" O poder da Carta 1 é %.2f\n" , superpoder1);

printf("\n***Cáculo do Super Poder da Carta 2***\n");
float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibcap2 + (1.0f / densidade1);
printf(" O poder da Carta 2 é %.2f\n" , superpoder2);

//Comparar as Cartas
// se o resultado for 1 carta 1 ganhou se for 0 carta 2 ganhou
    printf("\n***Comparação das Cartas 1 e 2***\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 < populacao2) + 1, (populacao1 > populacao2)); 
    printf("Area: Carta %d venceu (%d)\n", (area1 < area2) + 1, (area1 > area2)); 
    printf("PIB: Carta %d venceu (%d)\n", (pib1 < pib2) + 1, (pib1 > pib2)); 
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 < pontosturisticos2) + 1, (pontosturisticos1 > pontosturisticos2)); 
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 > densidade2) + 1, (densidade1 < densidade2)); //  densidade populacional, a carta com o menor valor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibcap1 < pibcap2) + 1, (pibcap1 > pibcap2)); 
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 < superpoder2) + 1, (superpoder1 > superpoder2)); 

   
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
printf("\nCarta 1 - São Paulo : 3200");
printf("\nCarta 2 - Rio de Janeiro : 1600\n");

float compden1 = 3200;
float compden2 = 1600 ;

if(compden1 < compden2) { // menor valor vence
printf("A Carta  1 (São Paulo)venceu\n");

} else {
printf("A Carta 2 (Rio de Janeiro) venceu\n");
}





    


return 0 ;

}