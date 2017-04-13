#include <stdio.h>

/* Disegnare tramite l'uso del carattere * un quadrato di lato n, con n compreso tra 2 e 20
   Autore: Davide Vallati - Classe: 3° INA - Data: 21/11/2016 - Versione: 3.0 */

int main(){
	int n;	//lato del quadrato
	int I;	//contatore righe 
	int K;	//contatore colonne
	do{
		printf("Inserisci la misura del lato (compresa tra 2 e 20) ");
		scanf("%d",&n);
	}while((n<2)||(n>20));
	I=0;
    while(I<n){
    	K=0;
    	while(K<n){
    		printf(" *");
    		K++;
		}
	  printf("\n");
	  I++;
	}
}
