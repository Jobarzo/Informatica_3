#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Copia inversa
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */
   
int main()
{
	int N[10];//array
	int x;//contatore
	int A;//contatore
	int I;//contatore
	
	for(I=0;I<=9;I++){
		printf("Inserisci il numero: ");
        scanf("%d",&N[I]);
    }
    x=0;
	for(I=9;I>=x;I--){
		A=N[I];
		N[I]=N[x];
		N[x]=A;
		x++;
	}
	for(I=0;I<=9;I++){
		printf(" %d",N[I]);
    }
}
