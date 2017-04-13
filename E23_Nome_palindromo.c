#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Nome palindromo
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main(){
	
	char parola[100];//array che contiene la parola inserita dall'utente
	int cont;//variabile che contiene il valore di cont
	int I;//variabile che contiene il valore di I
	int pal;//variabile che contiene il valore di pal
	int medio;//variabile che contiene il valore di medio
	
	printf(" inserire un nome: ");//chiedo a video di inserire il nome
	scanf("%s",parola);
	cont=0;//valore iniziale della variabile cont
	while(parola[cont]!='\0'){//ciclo per il conteggio dei caratteri contenuti nella stringa
		cont++;//incremento il valore della variabile cont
	}
	I=0;//valore iniziale della variabile I
	pal=1;//valore iniziale della variabile pal
	medio=cont/2;//calcolo del punto medio della stringa
	while((I<medio)&&(pal==1)){//ciclo per controllare se il nome inserito è palindromo
	    if(parola[cont-1]!=parola[I]){//se la condizione è verificata allora...
	    	pal=0;
		}
      cont--;//decremento il valore della variabile cont
      I++;//incremento il valore della variabile I
    }
    if(pal==1){//se la condizione è verificata allora...
     	printf(" il nome e' palindromo");
    }
    else{//altrimenti
    	printf(" il nome non e' palindromo");
    }
}
