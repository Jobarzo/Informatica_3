#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Nome palindromo
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main(){
	
	char parola[100];
	int cont;
	int I;
	int pal;
	int medio;
	
	printf(" inserire un nome: ");
	scanf("%s",parola);
	cont=0;
	while(parola[cont]!='\0'){
		cont++;
	}
	I=0;
	pal=1;
	medio=cont/2;
	do{
	    if(parola[cont-1]!=parola[I]){
	    	pal=0;
		}
      cont--;
      I++;
    }while((I<medio)&&(pal==1));
    if(pal==1){
     	printf(" il nome e' palindromo");
    }
    else{
    	printf(" il nome non e' palindromo");
    }
}
