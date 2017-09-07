#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Caricamento di un'array e stampa inversa
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */
   
int main()
{
	int x;//contatore
	int vet[10];//array
	
	for(x=0;x<10;x++){
		printf(" Inserisci il numero: ");
		scanf("%d",&vet[x]);
	}
	for(x=9;x>=0;x--){
        if(vet[x]!=0){
        	printf(" %d",vet[x]);
		}   
	}
	
}
