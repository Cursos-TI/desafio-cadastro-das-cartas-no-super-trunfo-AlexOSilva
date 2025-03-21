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

  //Implementando Comparações Avançadas com Atributos Múltiplos

char escolha1 ;
int escolha2 ;
int resultado1;
int resultado2;
 char pais1[50] = "São Paulo";
 char pais2[50] = "Rio de Janeiro";

 //Atributos e seus valores
int riqueza1 = 3;
int pobreza1= 2;
int DensidadeDemografica = 3; 
int tecnologia1 = 2 ;
int riqueza2 = 3;
int pobreza2= 0;
int DensidadeDemografica2 = 4;
int tecnologia2 = 5 ;



//Escolha dos Atributos 

printf("\n*** Comparações Avançadas com Atributos Múltiplos***\n");
printf("\n###Carta 1: %s vs  Carta 2: %s ###\n", pais1 , pais2);
printf("Escolha o primeiro  atributo\n");
printf("Digite R. Riqueza\n");
printf("Digite P. Pobreza\n");
printf("Digite D. Densidade Demográfica\n");
printf("Digite T. Tecnologia\n");
scanf(" %c", &escolha1);

switch(escolha1) {
case 'R' :
case 'r':

printf("Você escolheu a opção Riqueza!\n");
printf("Carta 1 : %s sua riqueza é : %d VS Carta 2 : %s sua riqueza é : %d\n" , pais1 , riqueza1 , pais2 , riqueza2);
resultado1 = riqueza1 > riqueza2 ? printf("Carta 1: %s venceu\n", pais1) :
    (riqueza1 < riqueza2 ? printf("Carta 2: %s venceu\n", pais2) :
    printf("Empate entre %s e %s\n", pais1, pais2));

break;

case 'P' :
case 'p':

printf("Você escolheu a opção Pobreza!\n");
printf("Carta 1 : %s sua pobreza é : %d VS Carta 2 : %s sua pobreza é : %d\n" , pais1 , pobreza1 , pais2 , pobreza2);
resultado1 = pobreza1 > pobreza2? printf("Carta 1 : %s venceu\n", pais1) : 
(pobreza1 < pobreza2 ? printf("Carta 2 : %s venceu\n", pais2):
printf("Empate entre %s e %s\n", pais1, pais2));

break;

case 'D' :
case 'd':

printf("Você escolheu a opção Densidade Demográfica!\n");
printf("Carta 1 : %s sua Densidade Demográfica é : %d VS Carta 2 : %s sua Densidade Demográfica é : %d\n" , pais1 , DensidadeDemografica , pais2 , DensidadeDemografica2); // A carta com o menor valor vence
resultado1 = DensidadeDemografica < DensidadeDemografica2 ? printf("Carta 1 : %s venceu\n", pais1) : 
(DensidadeDemografica > DensidadeDemografica2 ?  printf("Carta 2 : %s venceu\n", pais2):
printf("Empate entre %s e %s\n", pais1, pais2));

break;

case 'T' :
case 't':

printf("Você escolheu a opção Tecnologia!\n");
printf("Carta 1 : %s sua Tecnologia é : %d VS Carta 2 : %s sua Tecnologia é : %d\n" , pais1 , tecnologia1 , pais2 , tecnologia2);
resultado1 = tecnologia1 > tecnologia2? printf("Carta 1 : %s venceu\n", pais1) : 
(tecnologia1 < tecnologia2 ?  printf("Carta 2 : %s venceu\n", pais2):
printf("Empate entre %s e %s\n", pais1, pais2));
break;
default:
    printf("Escolha invalida\n");
    break;
}

do {
printf("\n*** Comparações Avançadas com Atributos Múltiplos***\n");
printf("\n###Carta 1: %s vs  Carta 2: %s ###\n", pais1 , pais2);
printf("Escolha o segundo atributo\n");
printf("Digite R. Riqueza\n");
printf("Digite P. Pobreza\n");
printf("Digite D. Densidade Demográfica\n");
printf("Digite T. Tecnologia\n");
scanf(" %c", &escolha2);

if(escolha2 == escolha1){
    printf("Você não pode escolher o mesmo atributo que foi escolhido anteriormente.Tente novamente!"); 
}}
while(escolha2 == escolha1);
    
switch(escolha2) {
        case 'R' :
        case 'r':
        
        printf("Você escolheu a opção Riqueza!\n");
        printf("Carta 1 : %s sua riqueza é : %d VS Carta 2 : %s sua riqueza é : %d\n" , pais1 , riqueza1 , pais2 , riqueza2);
        resultado2 = riqueza1 > riqueza2 ? printf("Carta 1: %s venceu\n", pais1) :
            (riqueza1 < riqueza2 ? printf("Carta 2: %s venceu\n", pais2) :
            printf("Empate entre %s e %s\n", pais1, pais2));
        
        break;
        
        case 'P' :
        case 'p':
        
        printf("Você escolheu a opção Pobreza!\n");
        printf("Carta 1 : %s sua pobreza é : %d VS Carta 2 : %s sua pobreza é : %d\n" , pais1 , pobreza1 , pais2 , pobreza2);
        resultado2 = pobreza1 > pobreza2? printf("Carta 1 : %s venceu\n", pais1) : 
        (pobreza1 < pobreza2 ? printf("Carta 2 : %s venceu\n", pais2):
        printf("Empate entre %s e %s\n", pais1, pais2));
        
        break;
        
        case 'D' :
        case 'd':
        
        printf("Você escolheu a opção Densidade Demográfica!\n");
        printf("Carta 1 : %s sua Densidade Demográfica é : %d VS Carta 2 : %s sua Densidade Demográfica é : %d\n" , pais1 , DensidadeDemografica , pais2 , DensidadeDemografica2); // A carta com o menor valor vence
        resultado2 = DensidadeDemografica < DensidadeDemografica2 ? printf("Carta 1 : %s venceu\n", pais1) : 
        (DensidadeDemografica > DensidadeDemografica2 ?  printf("Carta 2 : %s venceu\n", pais2):
        printf("Empate entre %s e %s\n", pais1, pais2));
        
        break;
        
        case 'T' :
        case 't':
        
        printf("Você escolheu a opção Tecnologia!\n");
        printf("Carta 1 : %s sua Tecnologia é : %d VS Carta 2 : %s sua Tecnologia é : %d\n" , pais1 , tecnologia1 , pais2 , tecnologia2);
        resultado2 = tecnologia1 > tecnologia2? printf("Carta 1 : %s venceu\n", pais1) : 
        (tecnologia1 < tecnologia2 ?  printf("Carta 2 : %s venceu\n", pais2):
        printf("Empate entre %s e %s\n", pais1, pais2));
        break;
        default:
    printf("Escolha invalida\n");
    break;
}
      //Soma dos atributos das cartas 1 e 2  
double somacarta1 = resultado1 + riqueza1 + pobreza1 + tecnologia1 + DensidadeDemografica ;
double somacarta2 = resultado2 + riqueza2 + pobreza2 + tecnologia2 + DensidadeDemografica2 ;

///Exibição da soma dos atributos para cada carta;//
printf("\nSoma dos valores dos atributos:\n");
printf("Carta 1: %.2f\n", somacarta1);
printf("Carta 2: %.2f\n", somacarta2);

//Comparação da soma;//

if(somacarta1 > somacarta2){
    printf("\nResultado final: Carta 1 venceu a rodada\n");   
}else if(somacarta1 < somacarta2){
    printf("\nResultado final: Carta 2 venceu a rodada\n");
}else{
    printf("\nResultado final: Empate!!\n");
}

  

  
  
  
  
  
  
  
  
  
  
  return 0;







}












