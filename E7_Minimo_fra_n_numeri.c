#include<stdio.h>

int main()
{
	int n;                           //variabile che contiene il valore di n
	int I;                           //variabile che contiene il valore di I
	int min;                         //variabile che contiene il valore di min
	int num;                         //variabile che contiene il valore di num
	
	printf("inserisci il numero dei valori che vuoi inserire? ");  //chiedi a video di inserire il numero dei valori dei quali vuole sapere il minimo
	scanf("%d",&n);  //indirizzo iniziale di n
	I=1;  //valore iniziale di I
	printf("inserisci un numero ");  //chiedi a video di inserire un numero min
	scanf("%d",&min);  //indirizzo iniziale di min
	while(I<n){  //mentre I<n allora...
		printf("inserisci un numero ");  //chiedi a video di inserire un numero num
		scanf("%d",&num);  //indirizzo iniziale di num
		if(num<min){  //se num<min allora...
			min=num;  
		}
		I++;  //aggiorno il contatore I
	}
	printf("il numero minimo e: %d",min);  //stampo il numero minimo
}
