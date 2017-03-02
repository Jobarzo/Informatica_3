#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*scrivere un programma che inserito un numero in input dall'utente permetta di cercarlo attraverso la ricerca binaria all'interno di un'array di numeri*/

int main(){
	
	int numeri[]={3,5,9,13,15,19,20,24,28,34,38,45,50,54,57,63,70,75,83,94};//numeri contenuti nell'array 'numeri'
	int max;//variabile che contieneil max
	int min;//variabile che contiene min
	int num;//variabile che contiene num
	int centro;//variabile che contiene il centro
	int trovato;//variabile che contiene trovato
	
	printf("\"Inserire il numero da cercare nell'array\": ");//chiedo a video di inserire il numero da cercare nell'array
	scanf("%d",&num);
	min=0;//valore iniziale della variabile min
	max=19;//valore iniziale della variabile max
	trovato=0;//valore iniziale della variabile trovato
	while((trovato==0)&&(min<=max)){
		centro=(max+min)/2;
	    if(num==numeri[centro]){//se num==numeri[centro] allora...
	    	trovato=1;//il valore della variabile trovato è 1
    	}
    	else{//altrimenti
		    if(num>numeri[centro]){//se num>numeri[centro] allore...
		     	min=centro+1;
			    centro=(max+min)/2;
	    	}
		    else{//altrimenti
		    	max=centro-1;
		    	centro=(max+min)/2;
	    	}
	    }
	}
	if(trovato==1){//se trovato==1
	    printf("\"hai trovato il numero\": [%d]",numeri[centro]);
    }
    else{//altrimenti
    	printf("\"il numero che cerchi non e' presente\"");
	}
}
