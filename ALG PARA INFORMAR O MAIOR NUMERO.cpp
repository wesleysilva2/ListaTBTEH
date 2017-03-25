#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maiordedois(int num1 , int num2){
  
  scanf("%d",num1);
  
   
    scanf("%d",num2);
    
	
	  if(num1<num2){
	  	
      
        printf("o maior numero e %d",num2);
       
      }
        
	    else{
	    	
      	
      	  printf("o maior numero e %d",num1);
	    
		}
		
	
}


int main(int argc, char *argv[]){
	
  int a, b, c;
  
    a=5; b=8;
   
      c=maiordedois(a,b);
    
       printf("maior numero e:%d",c);
     
     
  
  
}







