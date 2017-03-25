#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menordetres(int num1 , int num2, int num3){
	
	int z;
	
     if(num1<=num2 && num1<=num3){
     	z=num1;
     	 
	 }
	 
	   else if(num2<=num1 && num2<=num3){
	  	  z=num2;
	  	  
		    
	  }
	     else if(num3<=num1 && num3<=num2){
	        z=num3;
	    	  
		}
		
return(z);
	
}


int main(int argc, char *argv[]){
	
  int x, y, v, w;
    
    scanf("%d",w);
    
          x=3; y=7; v=2;
     
	        w=menordetres(x, y, v);
	         
	         printf("menor valor:%d",w);
	        
	  
return 0;
   
  

}







