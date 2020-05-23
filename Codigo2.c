#include <stdio.h>
#include <stdlib.h>  


int main() {       
int x, numDiv = 0, contPrimo = 0, repetidor;        
printf("Contagem de números primos de 1 a 1000."); 
for(repetidor = 2; repetidor < 1000; repetidor++){
numDiv = 0; 
for(x = 1; x <= repetidor; x++){  
if(repetidor % x == 0) {   
numDiv++;   
  }            
}           
if(numDiv == 2)
contPrimo++;          
  }    
printf("\n\nQuantidade de numeros primos no intervalo foi de %d numeros primos.", contPrimo); 
system("");    
return 0;   
 }
