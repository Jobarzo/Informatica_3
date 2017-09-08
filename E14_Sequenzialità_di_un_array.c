#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n; //numero da ricercare
	int V[]={4,6,15,24,35,52,64,71,85,96};//vettore dei numeri
	int I;//contatore
	int pos;//posizione
	
	printf("inserisci il numero da ricercare all'interno dell'array: ");
	scanf("%d",&n);
	
    I=0;
    while(V[I]!=n){
    	I++;
	}
	pos=I;
	if(pos<10){
		printf("Numero trovato");
	}
	else{
		printf("Numero non trovato");
	}
}
