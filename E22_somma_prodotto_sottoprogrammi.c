#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* somma e prodotto con sottoprogrammi
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */
   
int main(){
	int a;//n1
	int b;//n2
	int somma;//somma
	int prodotto;//prodotto
	printf("Inserire il primo numero:");
	scanf("%d",&a);
	printf("Inserire il secondo numero:");
	scanf("%d",&b);
	somma=S(a,b);
	prodotto=P(a,b);
	printf("La somma e':%d",somma);
	printf("\n");
	printf("Il prodotto e':%d",prodotto);
}

int S(int n1,int n2){
	int somma;
	somma=n1+n2;
	return somma;
}

int P(int n1,int n2){
	int prodotto;
	prodotto=n1*n2;
	return prodotto;
}

