#include <stdio.h>

//Desafio super trunfo - Países 
//Tema 1 - Cadastro das Cartas

int main() {

//Informações da carta 1
char codigo1 , codigo2; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
char estado1[20] , estado2[20]  ; // O nome do Estado
char cidade1[30] , cidade2[30] ; // O nome da cidade
int populacao1 , populacao2 ; // O número de habitantes da cidade
int pontosturisticos1 , pontoturisticos2 ; //A quantidade de pontos turísticos na cidade
float area1 , area2 ; //A área da cidade em quilômetros quadrados
float pib1 , pib2 ; //O Produto Interno Bruto da cidade

////Utilizada  a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
printf("Super Trunfo - Países\n");
printf("Carta  1\n");

printf("Digite o estado(ex:Amazonas): ");
scanf("%s" , estado1); 

printf("Digite o código(ex:A01): ");
scanf("%s" , &codigo1);

printf("Digite o nome da cidade(ex: Manaus): ");
scanf("%s" , &cidade1) ;

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
printf("Código: %s\n" , codigo1) ;
printf("Cidade: %s\n" , cidade1) ;
printf("População: %d\n" , populacao1);
printf("Pontos Turísticos: %d\n" , pontosturisticos1);
printf("PIB: %.2f\n" , pib1) ;
printf("Àrea Km2: %.2f\n" , area1) ;


 




















}