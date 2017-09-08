#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Eliminazione elemento array con shift
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main(){
	int V[10]={4,5,8,15,20,32,43,64,86,95};
	int I;
	int pos;
	int tot;
	
	tot=10;
	printf("Inserire posizione elemento: ");
	scanf("%d",&pos);
	for(I=pos;I<tot-1;I++){
		V[I]=V[I+1];
	}
	tot--;
	for(I=0;I<tot;I++){
		printf(" %d",V[I]);
	}
}
