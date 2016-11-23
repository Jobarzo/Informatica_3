#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* "Biglietto_Mirabilandia"
 Autore:Davide Vallati;Classe:3°INA;Data:23/11/2016;Versione:2.0 */
 
 main()
 {
 	char Risposta;                                      //variabile che contiene la risposta
 	char S;                                             //variabile che contiene il si
 	char N;                                             //variabile che contiene il no
 	int Eta;                                            //variabile che contiene l'età
 	float Altezza;                                      //variabile che contiene l'altezza
 	float Prezzo;                                       //variabile che contiene il prezzo
 	printf("La persona è disabile? (S=si,N=no)"); 
 	scanf("%c",&Risposta);                          
 	if (Risposta==S){
 		Prezzo=0;
	 }
	 else printf("Inserire Eta");                       
	      scanf("%d",&Eta);                             
	      if (Eta>=60){
	      	Prezzo=25,00;
		  }
		  else printf("Inserire Altezza");              
		       scanf("%f",&Altezza);                    
		       if (Altezza<=100){
		       	Prezzo=0;
			   }
			   else if (Altezza>=100 && Altezza<=140){
			   	Prezzo=28,00;
			   }
			   else Prezzo=34,90;			   
 }
