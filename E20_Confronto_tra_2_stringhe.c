//confronto tra due stringhe 
#include <stdio.h>
int main(){
	
	int x;	//contatore
	int flag;	//flag 
	char P1[100];
	char P2[100];
	
	printf(" Inserire la prima parola:");
	scanf("%s",P1);
	printf(" Inserire la seconda parola: ");
	scanf("%s",P2);
	x=0;
	flag=1;
	while(((P1[x]!='\0')||(P2[x]!='\0'))&&(flag==1)){
		if(P1[x]!=P2[x]){
			flag=0;
		}
		else{
			x++;
		}
	}
	if(flag==1){
		printf("Uguali");
	}	
	else{
		printf("Diverse");
	}
}
