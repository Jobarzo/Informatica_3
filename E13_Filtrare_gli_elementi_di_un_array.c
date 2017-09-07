#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Filtrare gli elementi di un'array
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */
   
int main()
{
	int I;
	int vet[10];
	int pari[10];
	int K;
	
	for(I=0;I<10;I++){
		printf("Inserisci un numero: ");
		scanf("%d",&vet[I]);
	}
	K=0;
	for(I=0;I<10;I++){
		pari[I]=0;
		if(vet[I]%2==0){
			pari[K]=vet[I];
			K++;
		}
	}
	printf("I numeri pari sono: ");
	for(I=0;I<K;I++){
        printf("%d ",pari[I]);
    }
}
