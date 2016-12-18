#include<stdio.h>

int main()
{
    int I; //variabile che contiene il valore di I
    int n; //variabile che contiene il valore di n
    int T; //variabile che contiene T
    n=2;
    while(n<=10){                                            //mentre n<=10 allora...
    	         I=1;
    	         T=0;
                 while(I<=10){                               //mentre I<=10 allora...
                              T=T+n;                                  
                              printf("%d ",T);                        
                              I++;
                              }
                        n++;
                        printf("\n");
                }
}









