#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  char nome[100];	
  int scelta;
  int l;
  int Y;
  int I;
  int cont;
	    printf("\n CALCOLO OCCORRENZE");//stampa a video la scritta
        printf("\n 1. Inserisci il tuo nome(max 100 caratteri)");//stampa a video l'opzione
        printf("\n 2. Calcolo lunghezza");//stampa a video l'opzione
        printf("\n 3. Calcolo frequenze");//stampa a video l'opzione
        printf("\n 0. EXIT");//stampa a video l'opzione
do{
  do{
    	printf("\n Inserisci la scelta(0-3): ");
    	scanf("%d",&scelta);
  }while((scelta<0)||(scelta>3));
  switch(scelta){
  	    case 1:printf("\n Inserisci il nome: ");
  	           scanf("%s",&nome);
  	           printf("\n Il tuo nome e' stato inserito \n");
  	    	   break;
  	    case 2:l=0;
  	           while(nome[l]!='\0'){
  	           l++;
			   }
			   printf("\n Il tuo nome e' lungo: %d \n",l);
  	    	   break;
  	    case 3:for(I=0;I<l;I++){
  	    	      cont=1;
  	    	      if(nome[I]!=0){
  	    	        for(Y=I+1;Y<l;Y++){
  	    	          	if(nome[I]==nome[Y]){
							cont++; 
							nome[Y]=0;
                        } 
					}
				  }
				  if(nome[I]!=0){
					printf("\nIl carattere %c si ripete %d volte\n",nome[I],cont); 
                  }
		       }
  	    break;
   }
  }while(scelta!=0);
}

