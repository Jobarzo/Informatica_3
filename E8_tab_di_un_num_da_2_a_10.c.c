#include<stdio.h>

/* Stampare la tabellina di un numero compreso tra 2 e 10
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
	int n; //variabile che contiene il valore di n
	int I; //variabile che contiene il valore di I
	int T; //variabile che contiene il valore di T
	
	I=0; //valore iniziale di I
	T=0; //valore iniziale di T
	
	do{
	printf("inserisci un numero compreso tra 2 e 10 "); //chiedi a video di inserire un numero compreso tra 2 e 10
	scanf("%d",&n); //indirizzo iniziale di n
    }while((n<2)||(n>10)); //quando la condizione è vera,il ciclo si ripete
    while(I<10){ //finche la condizione è vera il ciclo si ripete
    	T=T+n;
    	printf("\n %d",T); //stampo T
    	I++; //incremento il contatore
	}
}
