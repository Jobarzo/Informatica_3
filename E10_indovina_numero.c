#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Indovina_numero 
   Autore: Davide Vallati - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int num_c;// variabile che contiene il numero casuale generato dal computer
    int indovinato;// variabile che contiene indovinato
    int T;// variabile che contiene il numero di tentativi T
    int num_u;// variabile che contiene il numero inserito dall'utente
    int Versione;// variabile che contiene laVersione
    
    srand(time(NULL));//grazie a questa funzione ogni volta che il programma viene avviato i numeri vengono "rimescolati"
    num_c=rand()%21;// funzione per la generazione di un numero casuale
    indovinato=0;// inizializzazione della variabile indovinato
    T=10;// inizializzazione della variabile T    

    printf(" Inserire la versione(0=hard o 1=easy): ");// chiedo a video di inserire la versione                                                
    scanf("%d",&Versione);
    do{
        printf(" Inserire un numero: ");//chiedo a video di inserire un numero
        scanf("%d",&num_u);//indirizzo iniziale di n_u    
	    printf("\n");                                                      
        if(num_u==num_c){//se la condizione è vera allora...
            indovinato=1;
        }
        else{ //altrimenti...
            printf(" Hai sbagliato ");       
		    printf("\n");
                if(Versione==1){// se la condizione è vera allora...
                    if(num_u>num_c){// se la condizione è vera allora...
                        printf(" il numero inserito e' maggiore del numero cercato");
					    printf("\n");
					    printf("\n");
                    }
                    else{// altrimenti...
                        printf(" il numero inserito e' minore del numero cercato"); 
					    printf("\n");
					    printf("\n");
                    }
                }
              T--;//aggiornamento contatore 
	        }  
    }while((T>0)&&(indovinato==0));//se la condizione è vera il ciclo viene eseguito,altrimenti esce dal ciclo
    if(indovinato==1){// se la condizione è vera allora...
            printf("\n Hai vinto "); 
    }
    else{// altrimenti...
            printf("\n Hai perso "); 
    }                                        
}
