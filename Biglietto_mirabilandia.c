#include<stdio.h>

/* Biglietto Mirabilandia
   Autore: Davide Vallati - Classe: 3° INA - Data: 21/11/2016 - Versione: 3.0 */
 
 main()
 {
 	char Risposta;                                                //variabile che contiene il valore di Risposta
 	char risposta;                                                //variabile che contiene il valore di risposta
        int E;                                                        //variabile che contiene il valore dell'età
 	int H;                                                        //variabile che contiene il valore dell'altezza
	char Supplemento;                                             //variabile che contiene il valore di supplemento
 	float P;                                                      //variabile che contiene il valore del prezzo
 	printf(" \" La persona e disabile? \" (1=si,0=no): \n   ");                                                            //chiediamo a video se la persona è disabile
	scanf("%d",&Risposta);                                              
	if(Risposta==1)                                                                                                                    //se la Risposta è 1(si) allora...
	{
	    P=0.00;                                                                                                                                   //il prezzo è uguale a 0                                                       
	}
	else{
	     printf(" \" E un accompagnatore? \" (1=si,0=no): \n   ");                                                         //chiediamo a video se la persona è un accompagnatore                     
             scanf("%d",&risposta);                                           
	     if(risposta==1)                                                                                                                //se la risposta è 1(si) allora...
	     {
		P=25.50;                                                                                                                               //il prezzo è uguale a 25.50
	     }
	     else{ 
	          printf(" \"Inserisca l'Eta\":\n   ");                                                                        //chiediamo a video l'età della persona                      
	          scanf("%d",&E);
	          if (E>=60)                                                                                                                //se la persona ha un età maggiore ai 60 anni allora...
		  {
	         	P=25.00;                                                                                                                       //il prezzo è uguale a 25.50
		  }
		  else{ 
		       printf(" \"Inserisca l'Altezza \":\n   ");                                                              //chiediamo a video l'altezza della persona             
		       scanf("%d",&H);                    
		       if (H<=100)                                                                                                          //se la persona ha un'altezza minore o uguale ai 100 centmetri allora...
		       {
		       	     P=0.00;                                                                                                                  //il prezzo è uguale a 0
		       }
		       else {
			     if (H>=100 && H<=140)                                                                                          //se la persona ha un'altezza compresa tra i 100 e i 140 centimetri allora...
			     {
			   	   P=28.00;                                                                                                           //il prezzo è uguale a 28.00
			     }
			     else {
			              P=34.90;                                                                                                        //il prezzo è uguale a 34.90
			          }
                             }
		       } 			   
                 }
           }
   printf(" \" Vuole il supplemento mirabeach? \" (1=si,0=no): \n   ");                                           //chiediamo a video se la persona vuole il supplemento mirabeach
   scanf("%d",&Supplemento);
   if(Supplemento==1)                                                                                                                        //se la persona vuole il supplemento allora...
   {
   	    if(P==0.00)                                                                                                                      //se il prezzo è uguale a 0 allora...
   	    {
   	        P=0.00;                                                                                                                               //il prezzo finale rimane 0
	    }
	    else{
	    	if(P==34.90)                                                                                                                 //se il prezzo è uguale a 39.90 allora...
	    	{
	    	     P=P+9.50;                                                                                                                        //il prezzo finale è uguale al prezzo iniziale +9.50
		}
		else{
			 P=P+7.50;                                                                                                                    //il prezzo finale è uguale al prezzo iniziale +7.50
		    }
		}
    printf(" \"Il prezzo del biglietto e \": \n   %f",P);                              //stampa il prezzo finale
   } 
    else{
   	    printf(" \"Il prezzo del biglietto e \": \n   %f",P);                      //stampa il prezzo finale
        }
}
      

		
	
	
