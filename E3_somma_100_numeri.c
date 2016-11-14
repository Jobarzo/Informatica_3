#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
main()
{
	int SOMMA;//variabile che contiene la somma
	int I;//variabile che contiene il contatore
	SOMMA=0;
	I=1;
	while(I<=100){
		SOMMA=SOMMA+I;
		I=I+1;
	}
	printf("\n SOMMA= %d",SOMMA);
}
