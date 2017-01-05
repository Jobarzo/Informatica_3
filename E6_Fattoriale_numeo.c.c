#include<stdio.h>

int main()
{
	int fat;                         //variabile che contiene il valore di fat
	int num;                         //variabile che contiene il valore di num
	int I;                           //variabile che contiene il valore di I
	
	fat=1;  //valore iniziale di fat  
	printf("inserisci un numero ");  //chiedi a video di inserire un numero
	scanf("%d",&num);  //indirizzo iniziale di num
	I=0;  //valore iniziale di I
	while(I<num){  //mentre I<num allora...
		fat=fat*(num-I);   
		I++;  //aggiorno il contatore I
	}
	printf("il fattoriale di %d e: %d",num,fat);  //stampo il fattoriale di num
}
