#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* calcolo fattoriale con funzioni
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main(){
	
	int fat;//variabile che contiene il fattoriale
	int k;//contatore
	int flag;//flag
	
	do{
		do{
			printf("Inserire il numero: ");
			scanf("%d",&k);
		}while(k<0);
		fat=FAT(k);
		printf("Il fattoriale e': %d",fat);
		printf("Vuoi calcolare un altro fattoriale?(0=no 1=si)");
		scanf("%d",&flag);
	}while(flag==1);
}

int FAT(int n){
	int I;
	int f;
	if (n>=0){
		f=1;
		for(I=n;I>0;I--){
			f=f*I;
		}	
		return f;
	}
	else{
		return 0;
	}
}


