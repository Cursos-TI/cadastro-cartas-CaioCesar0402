
#include <stdio.h>

int main(){

char estado;
char codigoCarta [50], nomeCidade [50];
int populacao, numpontosTuristicos ;
float areaKM, pib;


printf ("digite o estado: \n");
scanf (" %c", &estado);

printf ("codigo da carta: \n");
scanf (" %s", codigoCarta);


printf ("digite o nome da cidade: \n");
scanf (" %s", nomeCidade);


printf ( "qual a populacao? \n");
scanf (" %d", &populacao);


printf ("quantos pontos turisticos? \n");
scanf (" %d", &numpontosTuristicos);

printf ("qual a area territorial? \n");
scanf (" %f", &areaKM);

printf ("qual o PIB? \n");
scanf (" %f", &pib);


printf ("digite o estado: %c\n - codigo da carta: %s\n", estado, codigoCarta);
printf("digite o nome da cidade: %s\n - qual a populacao? %d\n", nomeCidade , populacao);
printf ("quantos pontos turisticos? %d\n -    qual a area territorial? %f\n" , numpontosTuristicos , areaKM);
printf("qual o PIB? %f" , pib);

return 0;
}