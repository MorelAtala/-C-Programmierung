/* 
Implementierung von rFaktor.h
Autor: M.Tchoubou
Datum: 10/25
*/

#include <stdlib.h>
#include <math.h>



float rHochI(float r_faktor, int i)

{

float pot = 1.0; 

  if (i>0)
	  while(i--)
		  pot *=r_faktor;
	return pot;
  
}




float berechneDirekteInfizierte(float r_faktor, int schritte)

{

  float summe = 0.0;

  for (int i = 0; i <= schritte; i++){
    summe += rHochI(r_faktor,i);
   
  }

  return summe;

}

float berechneRekursiveInfizierte(float r_faktor, int schritte)

{

 if (schritte == 0)
		return 1.0;
	else
		return berechneRekursiveInfizierte(r_faktor, --schritte) * r_faktor;

}




