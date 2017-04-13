#include<stdio.h>

/* Dato un numero calcolare il suo fattoriale 
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
	int fat;//variabile che contiene il valore di fat
	int num;//variabile che contiene il valore di num
	int I;//variabile che contiene il valore di I
	
	fat=1;  //valore iniziale di fat  
	printf("inserisci un numero ");  //chiedi a video di inserire un numero
	scanf("%d",&num);  //indirizzo iniziale di num
	I=0;  //valore iniziale di I
	while(I<num){  //mentre I<num allora...
		fat=fat*(num-I);   
		I++;  //aggiorno il contatore I
	}
	printf("il fattoriale di %d e: %d",num,fat);  //stampo il fattoriale di num
}
