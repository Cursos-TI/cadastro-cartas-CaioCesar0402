
#include <stdio.h>

int main(){


//variaveis carta 1
char estado;
char codigoCarta [50], nomeCidade [50];
int populacao, numpontosTuristicos ;
float areaKM, pib;

// variaveis carta 2
char estado2;
char codigoCarta2 [50], nomeCidade2 [50];
int populacao2, numpontosTuristicos2 ;
float areaKM2, pib2;

// leitura carta 1
printf ("digite o estado 1: \n");
scanf (" %c", &estado);

printf ("codigo da carta: \n");
scanf (" %s", codigoCarta);

printf ("digite o nome da cidade: \n");
scanf (" %s", nomeCidade, 50, stdin);


printf ( "qual a populacao? \n");
scanf (" %d", &populacao);


printf ("quantos pontos turisticos? \n");
scanf (" %d", &numpontosTuristicos);

printf ("qual a area territorial? \n");
scanf (" %f", &areaKM);

printf ("qual o PIB? \n");
scanf (" %f", &pib);


//leitura carta 2
printf ("digite o estado 2: \n");
scanf (" %c", &estado);

printf ("codigo da carta: \n");
scanf (" %s", codigoCarta);

printf ("digite o nome da cidade: \n");
scanf (" %s", nomeCidade, 50, stdin);


printf ( "qual a populacao? \n");
scanf (" %d", &populacao);


printf ("quantos pontos turisticos? \n");
scanf (" %d", &numpontosTuristicos);

printf ("qual a area territorial? \n");
scanf (" %f", &areaKM);

printf ("qual o PIB? \n");
scanf (" %f", &pib);


//exibindo carta 1
printf ("digite o estado 1: %c\n - codigo da carta: %s\n", estado, codigoCarta);
printf("digite o nome da cidade: %s\n - qual a populacao? %d\n", nomeCidade , populacao);
printf ("quantos pontos turisticos? %d\n -    qual a area territorial? %f\n" , numpontosTuristicos , areaKM);
printf("qual o PIB? %f" , pib);



//exibindo carta 2
printf ("digite o estado 2: %c\n - codigo da carta: %s\n", estado2, codigoCarta2);
printf("digite o nome da cidade: %s\n - qual a populacao? %d\n", nomeCidade2 , populacao2);
printf ("quantos pontos turisticos? %d\n -    qual a area territorial? %f\n" , numpontosTuristicos2 , areaKM2);
printf("qual o PIB? %f" , pib2);

return 0;
}