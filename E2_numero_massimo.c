#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
main()
{
	int A;//variabile che contiene il valore di A
	int B;//variabile che contiene il valore di B
	int C;//variabile che contiene il valore di C
	int MAX;//variabile che contiene il valore massimo
	printf("\n inserisci il valore di A");//chiedi a schermo il valore di A
	scanf("%d",&A);//indica indirizzo di A
	printf("\n inserisci il valore di B");//chiedi a schermo il valore di B
	scanf("%d",&B);//indica indirizzo di B
	printf("\n inserisci il valore di C");//chiedi a schermo il valore di C
	scanf("%d",&C);//indica indirizzo di C
    if(A>B) { MAX=A;
	}
	else MAX=B;

	if(C>MAX) { MAX=C;
	}
	printf("\n MAX= %d",MAX);
}
	
