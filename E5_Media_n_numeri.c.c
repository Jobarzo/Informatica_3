#include<stdio.h>
int main()
{
	
	int n;                        //variabile che contiene il valore di n
	int I;                        //variabile che contiene il valore di I
	int num;                      //variabile che contiene il valore di num
	int somma;                    //variabile che contiene il valore di somma
	float media;                  //variabile che contiene il valore della media
	
	printf("Inserisci il numero dei valori che vuole inserire");  //chiedi a video di inserire il numero dei valori dei quali desidera calcolare la media
    scanf("%d",&n);  //indirizzo iniziale di n
    I=0;  //valore iniziale di I
    somma=0;  //valore iniziale di somma
    media=0;  //valore iniziale di media
    while(I<n){   //mente I<n allora...        
    	printf("Inserisci un numero");  //chiedi a video di inserire un numero num
		scanf("%d",&num);  //indirizzo iniziale di num                         
		somma=somma+num;
	   	I++;  //aggiorno il contatore I                                                                                                          a	
	}
    media=somma/n;
    printf("la media e: %f",media);  //stampo la media ottenuta
}

