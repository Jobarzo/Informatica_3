#include<stdio.h>

/* "Biglietto_Mirabilandia"
 Autore:Davide Vallati;Classe:3°INA;Data:23/11/2016;Versione:3.0 */
 
 main()
 {
 	char Risposta;
 	char risposta;
        int E;                                            
 	int H;                                     
 	float P;                                       
 	printf(" \" La persona e disabile? \" (1=si,0=no): \n   ");
	scanf("%d",&Risposta);                                    
	if(Risposta==1)
	{
	    P=0.00;
	}
	else{
		printf(" \" E un accompagnatore? \" (1=si,0=no): \n   ");                             
                scanf("%d",&risposta);
		if(risposta==1)
		{
			P=25.50;
		}
		else{ 
	             printf(" \"Inserire Eta\":\n   ");                       
	             scanf("%d",&E);
	             if (E>=60)
		     {
	      	             P=25.00;
		     }
		     else{ 
		          printf(" \"Inserire Altezza \":\n   ");              
		          scanf("%d",&H);                    
		          if (H<=100)
			  {
		          	P=0.00;
			  }
			   else {
			        if (H>=100 && H<=140)
				{
			   	     P=28.00;
			        }
			        else {
			              P=34.90;
				     }
                                }
		          } 			   
                    }
             }
printf(" \"il prezzo del biglietto e \": \n   %f",P);
}
      

		
	
