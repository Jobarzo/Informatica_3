#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Scambio di valore tra 2 variabili 
   Autore: Davide Vallati - Classe: 3° INA - Data: 10/11/2016 - Versione: 1.0 */

main()
{
	int A; //variabile che contiene il valore di A
	int B; //variabile che contiene il valore di B
	int TEMP; //variabile temporanea
	printf("\n Inserisci il valore di A"); //chiede a schermo di inserire il valore di A
	scanf("%d",&A); //indica indirizzo di A
	printf("\n Inserisci il valore di B"); //chiede a schermo di inserire il valore di B
	scanf("%d",&B); //indica indirizzo di B
	TEMP=A;
	A=B;
	B=TEMP;
	printf("\n A= %d",A);
	printf("\n B= %d",B);
	
}
