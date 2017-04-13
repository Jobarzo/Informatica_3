#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Somma dei primi 100 numeri
   Autore: Davide Vallati - Classe: 3° INA - Data: 14/11/2016 - Versione: 1.0 */

main()
{
	int SOMMA;//variabile che contiene la somma
	int I;//variabile che contiene il contatore
	SOMMA=0;
	I=1;
	while(I<=100){
		SOMMA=SOMMA+I;
		I=I+1;
	}
	printf("\n SOMMA= %d",SOMMA);
}
