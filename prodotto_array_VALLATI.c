#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* scrivere un programma in pseudocodifica e in c che dato un vettore di k elementi con k compreso tra n1 e n2,con n2<1000 e dispari e uno scalare num intero
   effettui il prodotto tra lo scalare e il vettore.
   Autore: Davide Vallati - Classe: 3°IN A - Data: 30/01/2017 - Versione: 1.0 */
   
int main(){
	int n1; //variabile che contiene n1
	int n2; //variabile che contiene n2
	int k; //variabile che contiene k
	int numeri[999]; //variabile che contiene l'array
	int num; //variabile che contiene num
	int I; //variabile che contiene I
	
	do{ 
		printf("\n inserisci n2 minore di 1000 e dispari: "); //chiedi a video di inserire il valore di n2
		scanf("%d",&n2); //indirizzo di n2
	}while((n2<0)||(n2>1000)||(n2%2==0));
	do{
		printf("\n inserisci n1 maggiore di 0 e minore di n2: "); //chiedi a video di inserire il valore di n1
		scanf("%d",&n1); //indirizzo di n1
	}while((n1<0)||(n1>n2));
	do{
		printf("\n inserisci k maggiore di n1 e minore di n2: "); //chiedi a video di inserire il valore di k
		scanf("%d",&k); //indirizzo di k
	}while((k<n1)||(k>n2));
	printf("\n inserisci num: "); //chiedi a video di inserire il valore di num
	scanf("%d",&num); //indirizzo di num
	for(I=0;I<k;I++){
		printf("\n inserisci un numero nel vettore: "); //chiedi a video di inserire un numero nel vettore
		scanf("%d",&numeri[I]); 
   }
   for(I=0;I<k;I++){
   	    numeri[I]=numeri[I]*num;
		printf("\n %d",numeri[I]);
   }
	
}



