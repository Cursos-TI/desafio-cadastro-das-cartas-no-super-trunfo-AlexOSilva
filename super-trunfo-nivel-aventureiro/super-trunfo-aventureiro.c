#include <stdio.h>

//Desafio super trunfo - Países 
//Tema 1 - Cadastro das Cartas

int main() {

//Informações da carta 
char codigo1[50] , codigo2[50]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
char estado1[50] , estado2[50]  ; // O nome do Estado
char cidade1[50] , cidade2[50] ; // O nome da cidade
int populacao1 , populacao2 ; // O número de habitantes da cidade
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
scanf("%s" , cidade1) ;

printf("Digite a população (ex:50000) cinquenta mil: "); 
scanf("%d" , &populacao1) ;

printf("Digite os números de pontos turísticos (ex: 10): ");
scanf("%d" , &pontosturisticos1) ; 

printf("Digite o Pib(ex: 700.28) milhões: "); 
scanf("%f", &pib1); 

printf("Digite a área(ex:1521.11) km²: ") ;
scanf("%f" , &area1) ; 

//Imprimindo a carta 1
printf("\nSuper trunfo - Carta 1: \n") ; 
printf("Estado: %s\n" , estado1) ;
printf("Código: %s\n " , codigo1) ;
printf("Cidade: %s\n" , cidade1) ;
printf("População: %d\n" , populacao1);
printf("Pontos Turísticos: %d\n" , pontosturisticos1);
printf("PIB: %.2f\n milhões de reais\n" , pib1) ;
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
scanf("%d" , &populacao2) ;

printf("Digite os números de pontos turísticos (ex: 10): ");
scanf("%d" , &pontosturisticos2) ; 

printf("Digite o Pib(ex: 700.28) milhões: "); 
scanf("%f", &pib2); 

printf("Digite a área(ex:1521.11) km²: ") ;
scanf("%f" , &area2) ; 

//Imprimindo a carta 2
printf("\nSuper trunfo - Carta 2: \n") ; 
printf("Estado: %s\n" , estado2) ;
printf("Código:%s\n " , codigo2) ;
printf("Cidade: %s\n" , cidade2) ;
printf("População: %d\n" , populacao2);
printf("Pontos Turísticos: %d\n" , pontosturisticos2);
printf("PIB: %.2f\n milhões de reais\n" , pib2) ;
printf("Àrea Km2: %.2f\n" , area2) ;

//Calcular a Densidade Populacional Carta 1
printf("\n***Cáculo da Densidade populacional da carta 1***\n");
float densidade1 = (float) (populacao1 / area1);
printf("A Densidade populacional da carta 1 é : %.2f\n" , densidade1);

//Calcular o PIB per Capita Carta 1
printf("\n***Cáculo do PIB per Capita da carta 1***\n");
float pibcap1= (float) (pib1 / populacao1);
printf("O PIB per Capita da carta 1 é : %.2f\n reais" , pibcap1);

//Calcular a Densidade Populacional Carta 2
printf("\n***Cáculo da Densidade populacional da carta 2***\n");
float densidade2 = (float) (populacao2 / area2);
printf("A Densidade populacional da carta 2 é : %.2f\n" , densidade2);

//Calcular o PIB per Capita Carta 2
printf("\n***Cáculo do PIB per Capita da carta 2***\n");
float pibcap2 = (float) (pib2/populacao2);
printf("O PIB per Capita da carta 2 é : %.2f\n reais" , pibcap2);







return 0 ;

}