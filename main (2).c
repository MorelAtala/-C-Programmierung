/*
Testen von R Faktor
Autor: M. Tchoubou
Datum: 10/25
*/

#include <stdio.h>
#include "rFaktor.h"


int main (int argc, char* argv[]){
	
  int schritte1  = 10;
  float r_faktor1 = 1.5;
  int schritte2  = 20;
  float r_faktor2 = 0.9;
  float testergebnis1 = 0.0, testergebnis2=0.0 ;

  testergebnis1 = berechneDirekteInfizierte(r_faktor1,schritte1);
    printf("For r_faktor = %f and schritte = %d , Ergebnis ist %f\n",r_faktor1 , schritte1 , testergebnis1);
  testergebnis2 = berechneRekursiveInfizierte(r_faktor2,schritte2);
  
  printf("For r_faktor = %f and schritte = %d , Ergebnis ist %f\n",r_faktor2 , schritte2 , testergebnis2);

  
  


  return 0;
}